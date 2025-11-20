/* Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/ 

#include <stdio.h>

int main(void) {
    char s[1005];
    if (scanf("%1004s", s) != 1) return 0;

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == '0') putchar('1');
        else if (s[i] == '1') putchar('0');
        else return 0; /* invalid input: do nothing */
    }
    putchar('\n');
    return 0;
}