/* Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/ 

#include <stdio.h>

int main(void) {
    int rows = 5;
    for (int i = 0; i < rows; ++i) {
        for (int s = 0; s < i; ++s) putchar(' ');
        for (int j = 0; j < rows - i; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}