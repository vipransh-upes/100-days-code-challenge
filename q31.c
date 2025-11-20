/* Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/ 

// ...existing code...
#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int neg = n < 0;
    unsigned long long x = neg ? (unsigned long long)(-n) : (unsigned long long)n;
    char buf[65];
    int i = 0;

    while (x > 0) {
        buf[i++] = '0' + (x & 1);
        x >>= 1;
    }

    if (neg) putchar('-');
    for (int j = i - 1; j >= 0; --j) putchar(buf[j]);
    putchar('\n');
    return 0;
}
// ...existing code...