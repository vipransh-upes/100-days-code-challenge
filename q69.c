/* Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/ 

#include <stdio.h>

int main() {
    int n, i, a[100];
    int max1, max2;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max1 = max2 = -99999;  // very small initial values

    for(i = 0; i < n; i++) {
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    printf("%d", max2);

    return 0;
}
