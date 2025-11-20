/* Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/ 

// ...existing code...
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { printf("0\n"); return 0; }

    long long sum = (long long)n * n; /* sum of first n odd numbers = n^2 */
    printf("%lld\n", sum);
    return 0;
}
// ...existing code...