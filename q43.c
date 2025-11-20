/* Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/ 

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    if (n < 0) { printf("Not strong number\n"); return 0; }

    int fact[10] = {1,1,2,6,24,120,720,5040,40320,362880};
    unsigned long long sum = 0;
    long long tmp = n;
    if (tmp == 0) sum = fact[0];

    while (tmp > 0) {
        int d = tmp % 10;
        sum += fact[d];
        tmp /= 10;
    }

    if (sum == (unsigned long long)n) printf("Strong number\n");
    else printf("Not strong number\n");

    return 0;
}
