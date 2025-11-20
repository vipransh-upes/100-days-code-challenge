/* Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/ 

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n < 0) { /* negative numbers not Armstrong */ 
        printf("Not Armstrong\n");
        return 0;
    }

    long long tmp = n;
    int digits = 0;
    if (tmp == 0) digits = 1;
    while (tmp > 0) {
        ++digits;
        tmp /= 10;
    }

    long long sum = 0;
    tmp = n;
    if (tmp == 0) sum = 0;
    while (tmp > 0) {
        int d = tmp % 10;
        long long p = 1;
        for (int i = 0; i < digits; ++i) p *= d;
        sum += p;
        tmp /= 10;
    }

    if (sum == n) printf("Armstrong\n");
    else printf("Not Armstrong\n");

    return 0;
}