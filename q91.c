/* Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/ 

#include <stdio.h>

int main() {
    char str[1000];
    char result[1000];
    int j = 0;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        // Convert to lowercase for checking
        char low = ch;
        if(ch >= 'A' && ch <= 'Z')
            low = ch + 32;

        // Skip vowels
        if(low=='a' || low=='e' || low=='i' || low=='o' || low=='u')
            continue;

        result[j++] = ch;
    }

    result[j] = '\0';

    printf("%s", result);

    return 0;
}
