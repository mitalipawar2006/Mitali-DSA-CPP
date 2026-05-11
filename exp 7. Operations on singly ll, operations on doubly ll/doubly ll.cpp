#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLL {
    Node* head;

public:
    DoublyLL() {
        head = NULL;
    }

    void insertBegin(int val) {
        Node* newNode = new Node(val);

        if (head != NULL)
            head->prev = newNode;

        newNode->next = head;
        head = newNode;
    }

    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    void insertAtPosition(int val, int pos) {
        if (pos == 1) {
            insertBegin(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            cout << "Invalid position\n";
            return;
        }

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newNode;

        temp->next = newNode;
    }

    void deleteBegin() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL)
            head->prev = NULL;

        delete temp;
    }

    void deleteEnd() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->prev->next = NULL;
        delete temp;
    }

    void deleteAtPosition(int pos) {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        if (pos == 1) {
            deleteBegin();
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            cout << "Invalid position\n";
            return;
        }

        if (temp->next != NULL)
            temp->next->prev = temp->prev;

        if (temp->prev != NULL)
            temp->prev->next = temp->next;

        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyLL list;

    list.insertBegin(10);
    list.insertEnd(20);
    list.insertAtPosition(15, 2);
    list.display();

    list.deleteAtPosition(2);
    list.display();

    list.deleteBegin();
    list.deleteEnd();
    list.display();

    return 0;
}
