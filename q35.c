/* Q35: Write a program to print all factors of a given number.

Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/ 

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    if (n <= 0) { printf("\n"); return 0; }

    int first = 1;
    for (long long i = 1; i <= n; ++i) {
        if (n % i == 0) {
            if (!first) printf(" ");
            printf("%lld", i);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}