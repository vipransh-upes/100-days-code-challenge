/* Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/ 

// ...existing code...
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n < 0) return 0; /* no output for negative input */

    unsigned long long fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= (unsigned long long)i;
    }

    printf("%llu\n", fact);
    return 0;
}
// ...existing code...