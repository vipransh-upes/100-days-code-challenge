/* Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/ 

#include <stdio.h>

int main() {
    char src[100], dest[100];
    scanf("%s", src);
    scanf("%s", dest);

    FILE *fs = fopen(src, "r");
    if(fs == NULL) {
        printf("Error opening source file!");
        return 0;
    }

    FILE *fd = fopen(dest, "w");
    if(fd == NULL) {
        printf("Error creating destination file!");
        fclose(fs);
        return 0;
    }

    int ch;
    while((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s", dest);

    return 0;
}
