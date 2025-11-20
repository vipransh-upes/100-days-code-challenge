/* Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/ 
#include <stdio.h>

int main(void) {
    int units;
    if (scanf("%d", &units) != 1) return 0;

    if (units <= 0) {
        printf("Bill: ₹0\n");
        return 0;
    }

    long bill = 0;
    int rem = units;
    int take;

    take = rem > 100 ? 100 : rem;
    bill += (long)take * 5;
    rem -= take;

    take = rem > 100 ? 100 : rem;
    bill += (long)take * 7;
    rem -= take;

    take = rem > 100 ? 100 : rem;
    bill += (long)take * 10;
    rem -= take;

    if (rem > 0) bill += (long)rem * 12;

    printf("Bill: ₹%ld\n", bill);
    return 0;
}