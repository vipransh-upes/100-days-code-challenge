/* Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/ 

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n < 0) n = -n;
    unsigned long long x = (unsigned long long)n;

    long long sum = 0;
    if (x == 0) {
        printf("0\n");
        return 0;
    }
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    printf("%lld\n", sum);
    return 0;
}
