#include <stdio.h>

void fibbo(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        fibbo(n - 1, b, a + b);
    }
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibbo(n, 0, 1);
    printf("\n");
    return 0;
}