#include<stdio.h>
int main()
{
    int first, second, *a, *b, sum;
    printf("Enter the number for addition\n:-");
    scanf("%d%d",&first, &second);

    a = &first;
    b = &second;

    sum = *a + *b;
    printf("Sum of two numbers is =%d\n:-",sum);

    return 0;
}