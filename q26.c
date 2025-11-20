/* Q26: Write a program to print numbers from 1 to n.

Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/ 

// ...existing code...
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n <= 0) {
        printf("\n");
        return 0;
    }

    for (int i = 1; i <= n; ++i) {
        if (i > 1) printf(" ");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}