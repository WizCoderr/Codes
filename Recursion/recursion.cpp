#include <iostream>

void fact(int num) {
    if (num == 1) {
        std::cout << num << std::endl;
        return;
    }
    std::cout << num << std::endl;
    fact(num - 1);
}

int main() {
    fact(5);
    return 0;
}
