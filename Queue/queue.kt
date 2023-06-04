// Queue implementation using MutableList
class Queue {
    private val queue = mutableListOf<Int>()

    fun enqueue(value: Int) {
        queue.add(value)
    }

    fun dequeue() {
        if (queue.isNotEmpty()) {
            println("Dequeued element: ${queue.removeAt(0)}")
        } else {
            println("Queue is empty.")
        }
    }

    fun displayQueue() {
        if (queue.isNotEmpty()) {
            print("Queue elements: ")
            queue.forEach { value -> print("$value ") }
            println()
        } else {
            println("Queue is empty.")
        }
    }
}

fun main() {
    val queue = Queue()
    queue.enqueue(10)
    queue.enqueue(20)
    queue.enqueue(30)
    queue.displayQueue()
    queue.dequeue()
    queue.displayQueue()
}
