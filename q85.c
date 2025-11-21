/* Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/ 

#include <stdio.h>

int main() {
    char str[1000];
    int len = 0;

    fgets(str, sizeof(str), stdin);

    // Find length (excluding newline)
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Print in reverse
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
