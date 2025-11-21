/* Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/ 

#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int freq[26] = {0};

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // Count frequency for first string
    for(int i = 0; s1[i] != '\0' && s1[i] != '\n'; i++) {
        if(s1[i] >= 'a' && s1[i] <= 'z')
            freq[s1[i] - 'a']++;
        else if(s1[i] >= 'A' && s1[i] <= 'Z')
            freq[s1[i] - 'A']++;
    }

    // Reduce frequency for second string
    for(int i = 0; s2[i] != '\0' && s2[i] != '\n'; i++) {
        if(s2[i] >= 'a' && s2[i] <= 'z')
            freq[s2[i] - 'a']--;
        else if(s2[i] >= 'A' && s2[i] <= 'Z')
            freq[s2[i] - 'A']--;
    }

    // Check if all frequencies are zero
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
