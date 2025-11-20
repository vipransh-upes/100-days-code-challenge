/* Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/ 

// ...existing code...
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n < 2) {
        /* no even numbers in range 1..n */
        printf("0\n");
        return 0;
    }

    unsigned long long prod = 1;
    int count = 0;
    for (int i = 2; i <= n; i += 2) {
        prod *= (unsigned long long)i;
        ++count;
    }

    if (count == 0) printf("0\n");
    else printf("%llu\n", prod);

    return 0;
}
// ...existing code...