#include<stdio.h>
int main()
{
    int firstNo, secondNo, *ptr1, *ptr2;
    printf("\nFind maximum number between two number :\n");

    printf("Enter the first number:");
    scanf("%d",&firstNo);
     printf("Enter the second number:");
    scanf("%d",&secondNo);

    ptr1 = &firstNo;
    ptr2 = &secondNo;

    if (*ptr1>*ptr2)
    {
        printf("\n%d is the maximum number\n",*ptr1);
    }
    else{
     printf("\n%d is the maximum number\n",*ptr2);
    }
    return 0;
}