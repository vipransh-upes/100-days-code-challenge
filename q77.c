/* Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/ 

#include <stdio.h>

int main() {
    int n;
    scanf("%d %d", &n, &n);  // square matrix

    int a[n][n];
    int diag[n];

    // Read matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Store diagonal elements
    for(int i = 0; i < n; i++) {
        diag[i] = a[i][i];
    }

    int distinct = 1;

    // Check if any two diagonal elements are same
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct) break;
    }

    if(distinct)
        printf("True");
    else
        printf("False");

    return 0;
}
