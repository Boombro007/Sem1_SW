#include <stdio.h>

// Function to print the Fibonacci series up to 'n' terms
// It has arguments (int n) and no return type (void)
void printFibonacci(int n) {
    // Check for invalid input
    if (n <= 0) {
        printf("The number of terms must be a positive integer.\n");
        return; // Exit the function
    }

    long long t1 = 0, t2 = 1; // Initialize the first two terms
    long long nextTerm;

    printf("Fibonacci Series up to %d terms: ", n);

    // Handle the special cases for 1 and 2 terms
    if (n >= 1) {
        printf("%lld", t1);
    }
    if (n >= 2) {
        printf(", %lld", t2);
    }

    // Generate the rest of the terms
    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %lld", nextTerm);
        t1 = t2; // Update t1 to the previous t2
        t2 = nextTerm; // Update t2 to the newly calculated term
    }
    printf("\n"); // Newline for clean output
}

// Main function to demonstrate the use of printFibonacci
int main() {
    int terms;

    printf("Enter the number of terms: ");
    // It's important to check if scanf successfully read an integer
    if (scanf("%d", &terms) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Return with an error code
    }

    // Call the function
    printFibonacci(terms);

    return 0; // Successful execution
}