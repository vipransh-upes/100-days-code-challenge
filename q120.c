/* Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/ 

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int capitalizeNext = 1;

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] == ' ') {
            capitalizeNext = 1;
        } 
        else if(capitalizeNext == 1) {
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;   // lowercase → uppercase
            capitalizeNext = 0;
        }
        else {
            if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;   // uppercase → lowercase
        }
    }

    printf("%s", str);

    return 0;
}
