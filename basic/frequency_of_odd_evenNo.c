#include <stdio.h>
 
void main()
{
    static int Arr[10][10];
    int i, j, x, y;
    int    even,  odd;
 
    printf("Enter the order of the matrix \n");
    //Inputing elements in matrix from user
    scanf("%d %d", &x, &y);
    printf("Enter the coefficients of matrix \n");
 
    /* Assuming that there are 0 even and odd elements */
    even = 0;
    odd = 0;
    for (i = 0; i < x; ++i)
    {
            for (j = 0; j < y; ++j)
            {
                 scanf("%d", &Arr[i][j]);
                 if ((Arr[i][j] % 2) == 0)
                 {
                     ++even;
                 }
                 else
                     ++odd;
             }
    }
    // Printing user's given matrix
    printf("The given matrix is \n");
    for (i = 0; i < x; ++i)
    {
        for (j = 0; j < y; ++j)
        {
            printf(" %d", Arr[i][j]);
        }
        printf("\n");
    }
    // Printing occurance of even and odd numbers
    printf("\n The frequency of occurance of odd number  = %d \n", odd);
    printf("The frequency of occurance of even number = %d\n", even);
}