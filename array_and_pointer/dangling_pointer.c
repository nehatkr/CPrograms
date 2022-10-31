// dangling means hanging
#include <stdio.h>
#include <stdlib.h>
int *functiondangling()
{
    int a, b, sum;
    a = 23;
    b = 56;
    sum = a + b;
    printf("%d\n",sum);
}
int main()
{
    // Case1: deallocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 89;
    ptr[2] = 64;
    ptr[3] = 84;
    ptr[4] = 37;
    free(ptr); // ptr is now a dangling pointer

    // Case 2: Function returning local variable address
    int *dangptr = functiondangling(); // dangptr is now a dangling pointer

    int *danglingptr3;
    // Case 3:if a variable goes out of scope
    {
        int a = 12;
        danglingptr3 = &a;
    }
    // Here variable a goes out of scope which means danglingptr3 is pointing to a localtion which is freed and hence danglingptr3 is now a dangling pointer
    return 0;
}