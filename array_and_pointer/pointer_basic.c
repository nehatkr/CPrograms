#include<stdio.h>

int main(){
    int a = 76;
    int* ptra = &a;
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*ptra);
    printf("The address of pointer to a is%p\n",&ptra);
    printf("The address of a is %p\n",&a);
    printf("The address of a is %p\n",ptra);
     printf("the value of a is %x\n",*ptra); //%p and %x  format specifer is used for printing of address.


    return 0;
}