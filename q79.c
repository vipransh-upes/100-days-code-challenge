/* Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/ 

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Read matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Traverse all diagonals
    for(int d = 0; d < n + m - 1; d++) {

        int start = d < m ? 0 : d - m + 1;
        int end   = d < n ? d : n - 1;

        // Even diagonal → print reversed (to match sample)
        if(d % 2 == 0) {
            for(int i = end; i >= start; i--) {
                int j = d - i;
                if(j >= 0 && j < m)
                    printf("%d ", a[i][j]);
            }
        }

        // Odd diagonal → print normal
        else {
            for(int i = start; i <= end; i++) {
                int j = d - i;
                if(j >= 0 && j < m)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
