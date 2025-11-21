/* Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/ 

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], longest[1000];
    int maxLen = 0, currentLen = 0, j = 0;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] != ' ' && str[i] != '\n') {
            currentLen++;
        } 
        else {
            // end of a word
            if(currentLen > maxLen) {
                maxLen = currentLen;
                strncpy(longest, &str[i - currentLen], currentLen);
                longest[currentLen] = '\0';
            }
            currentLen = 0;
        }
    }

    // printing the longest word
    printf("%s", longest);

    return 0;
}
