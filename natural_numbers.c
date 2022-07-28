//write a program to check if the given number is a natural number.
#include<stdio.h>

    int main(){
    int i, sum = 0;
    printf("The first 10 natural number are:\n");
    for ( i = 1; i <=10; i++) 
    {
        printf("%d\n" ,i);
            //sum of nstural number.
            sum = sum + i;
    }

    printf("Sum of 10 natural number is :%d\n" ,sum);
    
    return 0;

    
}