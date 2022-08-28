#include<stdio.h>

int main(){
    int matrix[10][10],rows,column,even,odd;
    printf("Enter number of rows and columns:-\n");
    scanf("%d%d",&rows,&column);

    printf("Enter the element of matrix:-");
    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j < column; j++)
       {
        scanf("%d",&matrix[i][j]);
       }
       
    }
    printf("Entered matrix is :-\n");
    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j < column; j++)
       {
        printf("\t%d",matrix[i][j]);
       }
       printf("\n");
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if((matrix[i][j]%2) == 0){
                ++even;
            }
            else
            ++odd;
        }
        
    }
    printf ("\nThe frequency of occurance of odd number  = %d\n",odd);
 
	printf ("The frequency of occurance of even number = %d\n",even);

    return 0;
}