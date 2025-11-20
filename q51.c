/* Q51: Write a program to print the following pattern:
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
    int rows = 5;
    for (int i = 0; i < rows; ++i) {
        for (int s = 0; s < rows - 1 - i; ++s) putchar(' ');
        int start = rows - i;
        for (int j = start; j <= rows; ++j) printf("%d", j);
        putchar('\n');
    }
    return 0;
}