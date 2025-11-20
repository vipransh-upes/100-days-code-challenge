/* Q49: Write a program to print the following pattern:
5
45
345
2345
12345

Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/ 

#include <stdio.h>

int main(void) {
    for (int start = 5; start >= 1; --start) {
        for (int j = start; j <= 5; ++j) {
            printf("%d", j);
        }
        putchar('\n');
    }
    return 0;
}