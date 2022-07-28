//write a program for finding the area of circle
#include<stdio.h>

int main(){

    float r,area;
    float pi = 3.14;

    printf(" Enter Radius of circle ");
    scanf("%f" ,&r);

    area = pi*r*r;

    printf("Area of circle :%f" ,area);

    return 0;
}