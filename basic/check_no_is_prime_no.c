#include<stdio.h>

int main(){
    int n,num=0;
 printf("Enter the number to check the number is prime or not:\n");
 scanf("%d",&n);

//m = n/2;
for (int i = 2; i <= n/2 ; i++)
{
   if(n % i == 0) {
    num = num + 1;
   }
}
    if(num>0)
    printf("Given number is not prime no. ");
    else
    printf("Given number is prime no.: ");
    return 0;
}