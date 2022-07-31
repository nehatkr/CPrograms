#include<stdio.h>

int findgcd(int num1, int num2);

int main(){
    int num1, num2, gcd;
    printf("\n\nrecurtion : Find GCDof two number:\n");
    
    printf("Enter first number :\n");
    scanf("%d" ,&num1);
    printf("Enter second number :\n");
    scanf("%d" , &num2);

    gcd = findgcd(num1,num2);
    printf("\n The GCD of %d and %d is : %d", num1, num2, gcd);
    return 0;
}
int findgcd(int a, int b){
    while (a!=b)
    {
        if(a>b)
        return findgcd(a-b,b);
        else
        return findgcd(a ,b-a);

    }
    return a;
}