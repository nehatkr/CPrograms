#include<stdio.h>//distance between to numbers.
#include<math.h>

int main(){
    float x1, x2, y1, y2, D, Distance;
    printf("Enter x1\n");
    scanf("%f" ,&x1);

    printf("Enter y1\n");
    scanf("%f" ,&y1);

    printf("Enter x2\n");
    scanf("%f" ,&x2);

    printf("Enter y2\n");
    scanf("%f" ,&y2);

    D = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));

    Distance = sqrt(D);
    printf("Distance between the said number : %f" ,Distance);
    printf("\n");
    return 0;
}
