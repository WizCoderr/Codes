class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def traverse_linked_list(self):
        current = self.head
        while current:
            print(current.data, end=" ")
            current = current.next
        print()

    def insert_at_start(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def insert_at_end(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        current = self.head
        while current.next:
            current = current.next
        current.next = new_node

    def insert_at_index(self, index, data):
        new_node = Node(data)
        if index == 0:
            new_node.next = self.head
            self.head = new_node
            return
        current = self.head
        i = 0
        while current and i < index - 1:
            current = current.next
            i += 1
        if current is None:
            print("Invalid index!")
            return
        new_node.next = current.next
        current.next = new_node

    def delete_at_index(self, index):
        if self.head is None:
            print("List is empty!")
            return
        if index == 0:
            self.head = self.head.next
            return
        current = self.head
        i = 0
        while current and i < index - 1:
            current = current.next
            i += 1
        if current is None or current.next is None:
            print("Invalid index!")
            return
        current.next = current.next.next

linked_list = LinkedList()
linked_list.insert_at_end(1)
linked_list.insert_at_end(2)
linked_list.insert_at_end(3)
linked_list.insert_at_start(0)
linked_list.insert_at_index(2, 5)
linked_list.delete_at_index(1)
linked_list.traverse_linked_list()
