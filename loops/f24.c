#include <stdio.h>

int main() {
    int lines, i, j, k;
    char ch;

    // User input
    printf("Enter number of lines: ");
    scanf("%d", &lines);

    printf("Enter character or digit to print: ");
    scanf(" %c", &ch);  // Space before %c to handle newline

    for (i = 0; i < lines; i++) {
        // Print spaces using j
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Print characters using k (starts at lines and goes down)
        for (k = lines - i; k > 0; k--) {
            printf("%c", ch);
        }

        printf("\n");
    }
    
    return 0;
}