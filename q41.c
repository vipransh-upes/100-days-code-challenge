/* Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/ 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    int neg = n < 0;
    if (neg) n = -n;

    if (n < 10) { /* single digit */
        if (neg) printf("-%lld\n", n);
        else printf("%lld\n", n);
        return 0;
    }

    long long tmp = n;
    long long pow10 = 1;
    while (tmp >= 10) { tmp /= 10; pow10 *= 10; }

    long long first = n / pow10;
    long long last = n % 10;
    long long middle = (n % pow10) / 10;

    long long result = last * pow10 + middle * 10 + first;
    if (neg) result = -result;
    printf("%lld\n", result);
    return 0;
}