/* Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/ 

#include <stdio.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        if(ch >= 'a' && ch <= 'z')
            str[i] = ch - 32;   // lowercase → uppercase
        else if(ch >= 'A' && ch <= 'Z')
            str[i] = ch + 32;   // uppercase → lowercase
    }

    printf("%s", str);

    return 0;
}
