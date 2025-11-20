/* Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/ 

#include <stdio.h>

int main() {
    int n1, n2, i, a[100], b[100], c[200], k = 0;

    scanf("%d", &n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
        c[k++] = a[i];
    }

    scanf("%d", &n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
        c[k++] = b[i];
    }

    for(i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
