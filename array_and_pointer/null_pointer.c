#include<stdio.h>
int main()
{
    int a = 34;
    int *ptr = NULL;
    if (ptr != NULL){
    printf("The address of a is %d\n",*ptr);//pointer dreferenced
    }
    else{
        printf("The pointer is the null pointer and cannot be dereferenced ");
    }
    return 0;
}