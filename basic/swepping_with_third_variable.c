#include<stdio.h>

int main(){
 int a, b, c;

 printf("Enter the value of a and b :");
 scanf("%d %d" ,&a,&b);
 
 printf("Befor swepping : %d %d\n" ,a, b);
c = a;
a = b;
b = c;
printf("Numbers after swepping : %d %d\n" ,a,b);
    return 0;
}
