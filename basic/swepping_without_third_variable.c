#include<stdio.h>

int main(){
int a, b;
printf("Enter the value of a and b :\n");
scanf("%d %d" ,&a, &b);

printf("Numbers befor sweeping :%d %d\n" ,a, b);

//logic.
a = a + b;
b = a - b;
a = a - b;

printf("Numbers after swepping :%d %d\n" ,a, b);
    return 0;
}
