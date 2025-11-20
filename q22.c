/* Q22: Write a program to find profit or loss percentage given cost price and selling price.


Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
// ...existing code...
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int cp, sp;
    if (scanf("%d %d", &cp, &sp) != 2) return 0;
    if (cp == 0) return 0; /* avoid division by zero */

    int diff = sp - cp;
    if (diff == 0) {
        printf("No Profit No Loss\n");
    } else {
        int pct = (abs(diff) * 100) / cp;
        if (diff > 0)
            printf("Profit %d%%\n", pct);
        else
            printf("Loss %d%%\n", pct);
    }
    return 0;
}
