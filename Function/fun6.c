#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci sequence up to %d:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    printFibonacci(10); // Example call with argument 10
    return 0;
}