//write a program to convert celsius to fahrenheit.
#include<stdio.h>

int main(){

    float F,C;
    printf("Enter the value in celsius\n");
    scanf("%f" ,&C);

    F = (C * 9/5)+32;

    printf("value in fahrenheit is :%f" ,F);

    return 0;

}