#include<stdio.h> //program for finding first and last digit of entered number.

int main(){

int n, first,last;

printf("Enter any number :");
scanf("%d" ,&n);

first = n;

while (first >= 10)
{
    first = first / 10;
}
printf("First digit :%d\n" , first);

last = n % 10;
printf("Laste digit :%d\n" , last);
for (int i = 1; i <= 1; i++)
{
if (first == last)
{
   printf("Entered no. contain only one digit\n");
}
}
    return 0;
}
