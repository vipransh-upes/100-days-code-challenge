/* Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/ 

#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    // Read the string including spaces
    fgets(str, sizeof(str), stdin);

    // Count characters until newline or null
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count++;
    }

    printf("%d", count);

    return 0;
}
