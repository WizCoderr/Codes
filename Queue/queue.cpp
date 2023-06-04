// Queue implementation using a vector
#include <iostream>
#include <vector>

class Queue {
private:
    std::vector<int> queue;

public:
    void enqueue(int value) {
        queue.push_back(value);
    }

    void dequeue() {
        if (!queue.empty()) {
            std::cout << "Dequeued element: " << queue.front() << std::endl;
            queue.erase(queue.begin());
        } else {
            std::cout << "Queue is empty." << std::endl;
        }
    }

    void displayQueue() {
        if (!queue.empty()) {
            std::cout << "Queue elements: ";
            for (int value : queue) {
                std::cout << value << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Queue is empty." << std::endl;
        }
    }
};

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.displayQueue();
    queue.dequeue();
    queue.displayQueue();

    return 0;
}
