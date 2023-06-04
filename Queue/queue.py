# Queue implementation using a list
class Queue:
    def __init__(self):
        self.queue = []

    def enqueue(self, value):
        self.queue.append(value)

    def dequeue(self):
        if self.queue:
            print("Dequeued element:", self.queue.pop(0))
        else:
            print("Queue is empty.")

    def display_queue(self):
        if self.queue:
            print("Queue elements:", end=" ")
            print(*self.queue)
        else:
            print("Queue is empty.")

queue = Queue()
queue.enqueue(10)
queue.enqueue(20)
queue.enqueue(30)
queue.display_queue()
queue.dequeue()
queue.display_queue()
