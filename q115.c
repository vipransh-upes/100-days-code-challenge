/* Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/ 

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int len1 = strlen(s), len2 = strlen(t);
    if(s[len1-1] == '\n') s[len1-1] = '\0';
    if(t[len2-1] == '\n') t[len2-1] = '\0';

    int freq[26] = {0};

    for(int i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    for(int i = 0; t[i] != '\0'; i++)
        freq[t[i] - 'a']--;

    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
