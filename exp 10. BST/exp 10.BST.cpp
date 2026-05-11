#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int val) {
    if (!root) return new Node(val);
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = nullptr;
    int choice, val;
    while (true) {
        cout << "\n--- BST Operations ---" << endl;
        cout << "1. Insert\n2. Inorder\n3. Preorder\n4. Postorder\n5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; root = insert(root, val); break;
            case 2: cout << "Inorder: "; inorder(root); cout << endl; break;
            case 3: cout << "Preorder: "; preorder(root); cout << endl; break;
            case 4: cout << "Postorder: "; postorder(root); cout << endl; break;
            case 5: return 0;
            default: cout << "Invalid choice" << endl;
        }
    }
}
