/* Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.


Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
// ...existing code...

#include <stdio.h>

int main(void) {
    int days;
    if (scanf("%d", &days) != 1) return 0;

    if (days > 30) {
        printf("Membership Cancelled\n");
        return 0;
    }

    if (days <= 0) {
        printf("Fine ₹0\n");
        return 0;
    }

    int fine = 0;
    int rem = days;
    int take;

    take = rem > 5 ? 5 : rem;
    fine += take * 2;
    rem -= take;

    take = rem > 5 ? 5 : rem;
    fine += take * 4;
    rem -= take;

    /* remaining days (up to 20) */
    take = rem;
    fine += take * 6;

    printf("Fine ₹%d\n", fine);
    return 0;
}
