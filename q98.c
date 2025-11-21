/* Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/ 

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    // Remove newline if present
    if(str[len - 1] == '\n')
        str[len - 1] = '\0';

    // Print first initial
    if(str[0] != ' ')
        printf("%c.", str[0]);

    // Find initials except last word
    int lastSpace = -1;
    for(int i = 1; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            lastSpace = i;  // track last space

            // print initial of middle names
            if(str[i+1] != '\0' && str[i+1] != ' ')
                printf("%c.", str[i+1]);
        }
    }

    // Print surname (full word after last space)
    if(lastSpace != -1)
        printf(" %s", &str[lastSpace + 1]);

    return 0;
}
