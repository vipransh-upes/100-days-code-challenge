/* Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/ 
#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }
    if (n == 2) {
        printf("Prime\n");
        return 0;
    }
    if (n % 2 == 0) {
        printf("Not prime\n");
        return 0;
    }

    for (long long i = 3; i <= n / i; i += 2) {
        if (n % i == 0) {
            printf("Not prime\n");
            return 0;
        }
    }

    printf("Prime\n");
    return 0;
}

