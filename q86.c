/* Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/ 

#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, flag = 1;

    fgets(str, sizeof(str), stdin);

    // Find length (excluding newline)
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Check palindrome
    for(int i = 0, j = len - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
