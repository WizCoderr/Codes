#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void traverseLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

Node* insertAtStart(Node* head, int data) {
    Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

void insertAtEnd(Node* head, int data) {
    Node* newNode = createNode(data);
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void insertAtIndex(Node* head, int index, int data) {
    Node* newNode = createNode(data);
    Node* current = head;
    int i = 0;
    while (current != NULL && i < index - 1) {
        current = current->next;
        i++;
    }
    if (current == NULL) {
        cout << "Invalid index!" << endl;
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
}

Node* deleteAtIndex(Node* head, int index) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
