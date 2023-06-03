import java.util.EmptyStackException

class Stack(private val maxSize: Int) {
    private val arr = IntArray(maxSize)
    private var top = -1

    fun isEmpty(): Boolean {
        return top == -1
    }

    fun isFull(): Boolean {
        return top == maxSize - 1
    }

    fun push(data: Int) {
        if (isFull()) {
            println("Stack Overflow!")
            return
        }
        arr[++top] = data
    }

    fun pop(): Int {
        if (isEmpty()) {
            throw EmptyStackException()
        }
        return arr[top--]
    }

    fun peek(): Int {
        if (isEmpty()) {
            throw EmptyStackException()
        }
        return arr[top]
    }
}

fun main() {
    val stack = Stack(100)
    stack.push(1)
    stack.push(2)
    stack.push(3)
    println("Top element: ${stack.peek()}")
    println("Popped element: ${stack.pop()}")
    println("Top element: ${stack.peek()}")
}
