class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class LinkedList {
    Node head;

    void traverseLinkedList() {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }

    void insertAtStart(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
    }

    void insertAtEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node current = head;
        while (current.next != null) {
            current = current.next;
        }
        current.next = newNode;
    }

    void insertAtIndex(int index, int data) {
        Node newNode = new Node(data);
        if (index == 0) {
            newNode.next = head;
            head = newNode;
            return;
        }
        Node current = head;
        int i = 0;
        while (current != null && i < index - 1) {
            current = current.next;
            i++;
        }
        if (current == null) {
            System.out.println("Invalid index!");
            return;
        }
        newNode.next = current.next;
        current.next = newNode;
    }

    void deleteAtIndex(int index) {
        if (head == null) {
            System.out.println("List is empty!");
            return;
        }
        if (index == 0) {
            head = head.next;
            return;
        }
        Node current = head;
        int i = 0;
        while (current != null && i < index - 1) {
            current = current.next;
            i++;
        }
        if (current == null || current.next == null) {
            System.out.println("Invalid index!");
            return;
        }
        current.next = current.next.next;
    }
}

public class Main {
    public static void main(String[] args) {
        LinkedList linkedList = new LinkedList();
        linkedList.insertAtEnd(1);
        linkedList.insertAtEnd(2);
        linkedList.insertAtEnd(3);
        linkedList.insertAtStart(0);
        linkedList.insertAtIndex(2, 5);
        linkedList.deleteAtIndex(1);
        linkedList.traverseLinkedList();
    }
}
