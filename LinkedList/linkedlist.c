#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void traverseLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

struct Node* insertAtStart(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

void insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void insertAtIndex(struct Node* head, int index, int data) {
    struct Node* newNode = createNode(data);
    struct Node* current = head;
    int i = 0;
    while (current != NULL && i < index - 1) {
        current = current->next;
        i++;
    }
    if (current == NULL) {
        printf("Invalid index!\n");
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
}

struct Node* deleteAtIndex(struct Node* head, int index) {
    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }
    struct Node* temp = head;
    if (index == 0) {
        head = head->next;
        free(temp);
        return head;
    }
    struct Node* current = head;
    int i = 0;
    while (current != NULL && i < index - 1) {
        current = current->next;
        i++;
    }
    if (current == NULL || current->next == NULL) {
        printf("Invalid index!\n");
        return head;
    }
    temp = current->next;
    current->next = temp->next;
    free(temp);
    return head;
}

int main() {
    struct Node* head = createNode(1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    head = insertAtStart(head, 0);
    insertAtIndex(head, 2, 5);
    head = deleteAtIndex(head, 1);
    traverseLinkedList(head);
    return 0;
}
