#include<stdio.h>

int main(){
    int rows, space,n = 0;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

   for (int i = 1; i <= rows; i++ ,n=0)
    {
        for (space = 1; space <=rows - i; ++space)
        {
            printf("  ");
        }
        while (n != 2 * i - 1) {
        printf("* ");
        ++n;}
       printf("\n");
       
       }
       return 0;
    }
    
