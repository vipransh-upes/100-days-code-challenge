/*
Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float discriminant, root1, root2, realPart, imagPart;
    
    // Coefficients of the quadratic equation ax^2 + bx + c
    a = 1; 
    b = -3; 
    c = 2; 
    
    // Calculate the discriminant
    discriminant = b*b - 4*a*c;
    
    if(discriminant > 0)
    {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
    }
    else if(discriminant == 0)
    {
        // One real root (both roots are same)
        root1 = root2 = -b / (2*a);
        printf("Roots are real and same: %.2f\n", root1);
    }
    else
    {
        // Complex roots
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex: %.2f + %.2fi, %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
    
    return 0;
}