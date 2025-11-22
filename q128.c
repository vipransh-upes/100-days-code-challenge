/* Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/ 

#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!");
        return 0;
    }

    int vowels = 0, consonants = 0;
    char ch;

    while((ch = fgetc(fp)) != EOF) {
        // Convert to lowercase for easy comparison
        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if(ch >= 'a' && ch <= 'z') {       // only alphabets
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\nConsonants: %d", vowels, consonants);

    return 0;
}
