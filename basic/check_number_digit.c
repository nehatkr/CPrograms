//write a program to check number is two digit or not.
#include<stdio.h>

int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d" ,&x);

    if (x>9 && x<100)
    {
        printf("The given number is a two digit no.");
    }
    else {
        printf("Number is not a two digit no.");
    }
    return 0;
    
} 
