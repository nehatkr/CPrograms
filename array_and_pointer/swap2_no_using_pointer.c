#include <stdio.h>
int main()
{
    int x, y, *a, *b, temp;
    printf("Enter the value of x and y:-");
    scanf("%d%d", &x, &y);

    printf("Numbers before swapping\nx = %d\ny = %d", x, y);
    a = &x;
    b = &y;

    temp = *b;
    *b = *a;
    *a = temp;

    printf("\nNumbers after swapping\nx = %d\ny = %d", x, y);

    return 0;
}