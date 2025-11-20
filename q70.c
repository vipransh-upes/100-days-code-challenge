/* Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/ 

#include <stdio.h>

int main() {
    int n, i, k, a[100], temp;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    // For k larger than n
    k = k % n;

    while(k > 0) {
        temp = a[n - 1];
        for(i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = temp;
        k--;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
