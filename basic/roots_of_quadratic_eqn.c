// write a program for finding roots of quadratic equation.
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, root1, root2;
    printf("Enter the value of a\n");
    scanf("%f", &a);

    printf("Enter the value of b\n");
    scanf("%f", &b);

    printf("Enter the value of c\n");
    scanf("%f", &c);

    D = (b * b) - 4 * a * c;

    if (D >= 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("The value of root1 : %f\n", root1);
        printf("The value of root2 :%f\n", root2);
    } 
    else {
        printf("Roots are imaginary ");
    }

    return 0;
}