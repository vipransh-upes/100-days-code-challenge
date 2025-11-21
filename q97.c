/* Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/ 

#include <stdio.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    // Print first initial
    if(str[0] != ' ' && str[0] != '\n')
        printf("%c.", str[0]);

    // Print initial after every space
    for(int i = 1; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n') {
            printf("%c.", str[i+1]);
        }
    }

    return 0;
}
