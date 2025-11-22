/* Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/ 
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n], left[n], right[n], ans[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    left[0] = 1;
    for(int i = 1; i < n; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }

    right[n - 1] = 1;
    for(int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }

    for(int i = 0; i < n; i++) {
        ans[i] = left[i] * right[i];
    }

    printf("[");
    for(int i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if(i != n - 1) printf(",");
    }
    printf("]");

    return 0;
}
