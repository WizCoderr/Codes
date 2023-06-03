class Stack:
    def __init__(self):
        self.arr = []
    
    def is_empty(self):
        return len(self.arr) == 0
    
    def push(self, data):
        self.arr.append(data)
    
    def pop(self):
        if self.is_empty():
            raise Exception("Stack Underflow!")
        return self.arr.pop()
    
    def peek(self):
        if self.is_empty():
            raise Exception("Stack is empty!")
        return self.arr[-1]

stack = Stack()
stack.push(1)
stack.push(2)
stack.push(3)
print("Top element:", stack.peek())
print("Popped element:", stack.pop())
print("Top element:", stack.peek())
