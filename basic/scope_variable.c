//call by value 
#include <stdio.h>
int add(int a, int b) //formal parameter
{
    int sum = a + b;
    return sum;
}

int main()
{
    int a = 5;
    int b = 8;
    add(a,b); //actual parameter
    printf("%d",add(a,b));

    return 0;
}