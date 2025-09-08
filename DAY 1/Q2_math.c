#include <stdio.h>

int main() {
    int a, b;
    
    // Input two numbers
    scanf("%d %d", &a, &b);
    
    // Perform operations
    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b;   // Integer division
    
    // Display results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d", sum, diff, product, quotient);
    
    return 0;
}
