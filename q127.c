/* Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/ 

#include <stdio.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    if(fin == NULL) {
        printf("Error opening input file!");
        return 0;
    }

    FILE *fout = fopen("output.txt", "w");
    if(fout == NULL) {
        printf("Error creating output file!");
        fclose(fin);
        return 0;
    }

    int ch;
    while((ch = fgetc(fin)) != EOF) {
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 32;  // convert to uppercase
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("File converted successfully.");

    return 0;
}
