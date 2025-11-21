/* Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/ 

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int start = 0;

    for(int i = 0; ; i++) {

        // If space or end of string → reverse the word
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {

            int end = i - 1;

            // reverse the word from start to end
            while(start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;   // next word starts
            if(str[i] == '\0') break;
        }
    }

    printf("%s", str);

    return 0;
}
