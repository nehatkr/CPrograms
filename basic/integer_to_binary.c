#include <stdio.h>
int main()
{
    int num, var, remainder, binary = 0, x = 1;
    printf("\nEnter a number");
    scanf("%d", &num);

    var = num;
    while (num != 0)
    {
        remainder = num % 2;
        num = num / 2;
        binary = binary + (remainder * x);
        x = x * 10;
    }
    printf("\nBinary Equivalent of %d is %d", var, binary);

    return 0;
}