#include<stdio.h>
#include"static_variable.c"
#define PI 3.14
#define SQUARE(r) r*r

int main()
{
    float var = PI;
    int r = 8;
    printf("The value of PI os %f\n",var);
     printf("The area of circle is %f\n",PI *SQUARE(r));

    return 0;
}