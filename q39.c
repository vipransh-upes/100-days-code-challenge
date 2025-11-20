/* Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/ 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n < 0) n = -n;
    unsigned long long x = (unsigned long long)n;

    unsigned long long prod = 1;
    int found = 0;

    if (x == 0) {
        /* 0 has no odd digits -> as per spec, result is 1 */
    }

    while (x > 0) {
        int d = x % 10;
        if (d % 2 == 1) {
            prod *= (unsigned long long)d;
            found = 1;
        }
        x /= 10;
    }

    if (!found) prod = 1;
    printf("%llu\n", prod);
    return 0;
}