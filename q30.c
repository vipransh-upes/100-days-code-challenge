/* Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/ 

// ...existing code...
#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    int neg = n < 0;
    if (neg) n = -n;

    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if (neg) rev = -rev;
    printf("%lld\n", rev);
    return 0;
}
// ...existing code...