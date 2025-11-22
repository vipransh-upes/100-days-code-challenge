/* Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/ 

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n], left[n], right[n], answer[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Build left product array
    left[0] = 1;
    for(int i = 1; i < n; i++)
        left[i] = left[i - 1] * nums[i - 1];

    // Build right product array
    right[n - 1] = 1;
    for(int i = n - 2; i >= 0; i--)
        right[i] = right[i + 1] * nums[i + 1];

    // Final answer = left[i] * right[i]
    for(int i = 0; i < n; i++)
        answer[i] = left[i] * right[i];

    // Print output in format [a,b,c,...]
    printf("[");
    for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i != n - 1) printf(",");
    }
    printf("]");

    return 0;
}
