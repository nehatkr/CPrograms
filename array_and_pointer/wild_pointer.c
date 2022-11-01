//Unintialized pointer are known as wild pointer.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 345;
    int *ptr;//this is a wild pointer
   // *ptr = 23;//this is not good thing to do
    ptr = &a;//ptr is no longer a wild pointer
    printf("The value of a is %d\n",*ptr);
    return 0;
}