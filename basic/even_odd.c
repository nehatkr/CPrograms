//write a program to check the number is even or odd.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number n:");
    scanf("%d" ,&n);

    if (n % 2 == 0)
    {
        printf("Entered number is even");
    }
    else{
        printf("Given number is odd");
    }
    return 0;
    
}