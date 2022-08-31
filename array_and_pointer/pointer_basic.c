//pointer is used for dynamic memory allocation.
#include<stdio.h>

int main(){
    int a = 45;
    int *ptra = &a;
    int *ptra2 = &a;
    int *ptra3 = NULL;
    
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*ptra);
    printf("The address of pointer to a is%p\n",&ptra);
    printf("The address of a is %p\n",&a);
    printf("The address of a is %p\n", ptra);
    printf("the value of a is %x\n", *ptra); //%p and %x  format specifer is used for printing of address.
    printf("the value of some garbage  is %p\n", ptra2);
    printf("the value of some garbage  is %p\n", ptra3);

    return 0;
}