/* Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/ 

// ...existing code...
#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n < 0) { /* negative numbers considered not palindrome */ 
        printf("Not palindrome\n");
        return 0;
    }

    long long orig = n;
    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if (rev == orig) printf("Palindrome\n");
    else printf("Not palindrome\n");

    return 0;
}
// ...existing code...