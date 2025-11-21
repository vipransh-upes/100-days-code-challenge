/* Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/ 

#include <stdio.h>

int main() {
    char str[1000];
    int len = 0;

    fgets(str, sizeof(str), stdin);

    // find length (ignoring newline)
    while(str[len] != '\0' && str[len] != '\n')
        len++;

    // print all substrings
    for(int i = 0; i < len; i++) {
        for(int j = i; j < len; j++) {

            // print substring from i to j
            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            if(!(i == len-1 && j == len-1))
                printf(",");
        }
    }

    return 0;
}
