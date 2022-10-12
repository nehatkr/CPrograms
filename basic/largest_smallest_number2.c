#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the the three integer value:\n");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y)
    {
        if (x > z)
        {
            printf("Largest number %d\n", x);
            if (y < z)
                printf("Smallest number %d\n", y);
        }
        else
            printf("Smallest number %d\n", z);
    }
    else
        printf("Largest number %d\n", z);
    if (x < y)
    {
        printf("Smallest number %d\n", x);
    }
    else{
        printf("Smallest number %d\n", y);
    }
    return 0;
}