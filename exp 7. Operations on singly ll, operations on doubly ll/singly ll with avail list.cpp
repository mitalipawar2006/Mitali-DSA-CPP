#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val = 0) {
        data = val;
        next = NULL;
    }
};

class SinglyLL {
    Node* head;
    Node* avail;   // Avail list

public:
    SinglyLL() {
        head = NULL;
        avail = NULL;
    }

    // Get node from avail list or create new
    Node* getNode(int val) {
        Node* newNode;

        if (avail != NULL) {
            newNode = avail;
            avail = avail->next;
            newNode->data = val;
            newNode->next = NULL;

            cout << "Reusing node from avail list\n";
        }
        else {
            newNode = new Node(val);
            cout << "Creating new node\n";
        }

        return newNode;
    }

    // Put deleted node into avail list
    void freeNode(Node* node) {
        node->next = avail;
        avail = node;
    }

    void insertBegin(int val) {
        Node* newNode = getNode(val);

        newNode->next = head;
        head = newNode;
    }

    void insertEnd(int val) {
        Node* newNode = getNode(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    void deleteBegin() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        freeNode(temp);

        cout << "Node moved to avail list\n";
    }

    void deleteEnd() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        if (head->next == NULL) {
            freeNode(head);
            head = NULL;

            cout << "Node moved to avail list\n";
            return;
        }

        Node* temp = head;

        while (temp->next->next != NULL)
            temp = temp->next;

        Node* del = temp->next;
        temp->next = NULL;

        freeNode(del);

        cout << "Node moved to avail list\n";
    }

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    void displayAvail() {
        Node* temp = avail;

        cout << "Avail List: ";

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {
    SinglyLL list;

    list.insertBegin(10);
    list.insertEnd(20);
    list.insertEnd(30);

    cout << "\nMain List:\n";
    list.display();

    list.deleteBegin();
    list.deleteEnd();

    cout << "\nAfter Deletion:\n";
    list.display();

    cout << "\nAvail List:\n";
    list.displayAvail();

    cout << "\nInserting again:\n";
    list.insertBegin(40);

    list.display();

    cout << "\nAvail List after reuse:\n";
    list.displayAvail();

    return 0;
}
