/*
Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include<stdio.h>
int main()
{
    int n, sum;
    n = 5; // You can change this value to test with other inputs
    sum = n * (n + 1) / 2; // Formula for the sum of first n natural numbers
    printf("Sum=%d\n", sum);
    return 0;
}