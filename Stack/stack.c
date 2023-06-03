#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
    int arr[MAX_SIZE];
    int top;
};

void initializeStack(struct Stack* stack) {
    stack->top = -1;
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack* stack, int data) {
    if (isFull(stack)) {
        printf("Stack Overflow!\n");
        return;
    }
    stack->arr[++stack->top] = data;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->arr[stack->top];
}

int main() {
    struct Stack stack;
    initializeStack(&stack);
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    printf("Top element: %d\n", peek(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Top element: %d\n", peek(&stack));
    return 0;
}
