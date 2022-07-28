//write a program to print average of three no.
#include<stdio.h>

int main(){
    float a, b, c, Avg;
    printf("Enter three numbers for Average\n");
    scanf("%f %f %f",&a,&b,&c);

    Avg = (a + b + c)/3;
    printf("Average of three number is: %f", Avg);
    return 0;
}