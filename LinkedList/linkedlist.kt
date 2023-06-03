class Node(var data: Int) {
    var next: Node? = null
}

class LinkedList {
    var head: Node? = null

    fun traverseLinkedList() {
        var current = head
        while (current != null) {
            print("${current.data} ")
            current = current.next
        }
        println()
    }

    fun insertAtStart(data: Int) {
        val newNode = Node(data)
        newNode.next = head
        head = newNode
    }

    fun insertAtEnd(data: Int) {
        val newNode = Node(data)
        if (head == null) {
            head = newNode
            return
        }
        var current = head
        while (current!!.next != null) {
            current = current.next
        }
        current.next = newNode
    }

    fun insertAtIndex(index: Int, data: Int) {
        val newNode = Node(data)
        if (index == 0) {
            newNode.next = head
            head = newNode
            return
        }
        var current = head
        var i = 0
        while (current != null && i < index - 1) {
            current = current.next
            i++
        }
        if (current == null) {
            println("Invalid index!")
            return
        }
        newNode.next = current.next
        current.next = newNode
    }

    fun deleteAtIndex(index: Int) {
        if (head == null) {
            println("List is empty!")
            return
        }
        if (index == 0) {
            head = head!!.next
            return
        }
        var current = head
        var i = 0
        while (current != null && i < index - 1) {
            current = current.next
            i++
        }
        if (current == null || current.next == null) {
            println("Invalid index!")
            return
        }
        current.next = current.next!!.next
    }
}

fun main() {
    val linkedList = LinkedList()
    linkedList.insertAtEnd(1)
    linkedList.insertAtEnd(2)
    linkedList.insertAtEnd(3)
    linkedList.insertAtStart(0)
    linkedList.insertAtIndex(2, 5)
    linkedList.deleteAtIndex(1)
    linkedList.traverseLinkedList()
}
