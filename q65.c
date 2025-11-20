/* Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/ 

#include <stdio.h>

int main() {
    int n, i, a[100], key;
    int low, high, mid, pos = -1;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            pos = mid;
            break;
        }
        else if(key > a[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(pos == -1)
        printf("-1");
    else
        printf("Found at index %d", pos);

    return 0;
}
