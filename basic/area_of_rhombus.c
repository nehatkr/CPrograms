#include <stdio.h>

int main()
{
    float rmD1, rmD2, rmArea;
    
    printf("Enter the Rhombus First diagonal = ");
    scanf("%f",&rmD1);

    printf("Enter the Rhombus Second diagonal = ");
    scanf("%f",&rmD2);

    rmArea = (rmD1 * rmD2)/2;

    printf("The Area of a Rhombus = %.2f\n", rmArea); 
    
    return 0;
}