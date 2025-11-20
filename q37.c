/* Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/ 

#include <stdio.h>
#include <stdlib.h>

long long gcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) return 0;
    if (a == 0 || b == 0) { printf("0\n"); return 0; }
    long long g = gcd(a, b);
    long long l = llabs((a / g) * b);
    printf("%lld\n", l);
    return 0;
}