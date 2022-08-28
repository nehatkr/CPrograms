#include<stdio.h>

int main(){
    int matrix[3][3],trans[3][3];
    int i,j;
    printf("Enter the element of matrix:-\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
    printf("Entered matrix:-\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)
       {
        printf("\t%d",matrix[i][j]);
       }
       printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            trans[i][j] = matrix[j][i];//here rows changes in column and column changes into rows.
        }
        
    }
    printf("Tranpose of given matrix is:-\n");
     for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)
       {
        printf("\t%d",trans[i][j]);
       }
       printf("\n");
    }

    return 0;
}