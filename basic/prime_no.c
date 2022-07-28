#include<stdio.h>

int main(){
int n, i, m=0, num=0;
printf("Enter the number to check prime :\n");
scanf("%d", &n);

m=n/2;
for ( i = 2; i <= m; i++)
{
    if(n % i == 0){
        printf("Number is not prime");
        num=1;
        break;
    }
}
    if(num==0)
    printf("Number is prime");

    return 0;
}
