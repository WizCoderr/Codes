#include <iostream>
using namespace std;

void deleteFromStart(int* arr) {
    int i = 0;
    while (arr[i] != 0) {
        arr[i] = arr[i + 1];
        i++;
    }
}

void deleteFromEnd(int* arr) {
    int i = 0;
    while (arr[i] != 0) {
        i++;
    }
    arr[i - 1] = 0;
}

void deleteAtIndex(int* arr, int index) {
    int i = index;
    while (arr[i] != 0) {
        arr[i] = arr[i + 1];
        i++;
    }
}

void printArr(int* arr) {
    int i = 0;
    while (arr[i] != 0) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deleteFromStart(arr);
    deleteFromEnd(arr);
    deleteAtIndex(arr, 5);
    return 0;
}
