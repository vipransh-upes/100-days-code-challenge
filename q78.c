/* Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/ 

#include <stdio.h>

int main() {
    int n;
    scanf("%d %d", &n, &n);  // square matrix

    int a[n][n], sum = 0;

    // Read matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal
    for(int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("%d", sum);

    return 0;
}
