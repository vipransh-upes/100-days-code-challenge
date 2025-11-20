/* Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/ 

#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, max = 0, ans = 0;

    scanf("%lld", &n);

    while(n > 0) {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    for(int i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}
