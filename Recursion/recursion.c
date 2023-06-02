#include <stdio.h>

void fact(int num) {
    if (num == 1) {
        printf("%d\n", num);
        return;
    }
    printf("%d\n", num);
    fact(num - 1);
}

int main() {
    fact(5);
    return 0;
}
