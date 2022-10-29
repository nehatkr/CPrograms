#include <stdio.h>
int main()
{
    //dynamic memory allocation
    int a = 345;
    float b = 8.3;
    void *ptr;//general purpous pointer.
    //in a same pointer we stored two different data type at a same time.
    ptr = &a;
    ptr = &b;
    printf("The value of a %d\n", *((int *)ptr));
    printf("The value of b %f\n", *((float *)ptr));

    return 0;
}