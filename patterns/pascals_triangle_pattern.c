#include<stdio.h>

int main(){
    int space, cols, rows, no, n = 1;
    printf("Enter the number of rows :\n");
    scanf("%d" ,&no);
    
    for (int rows = 0; rows < no; rows++)
    {
        for (space = 0; space < (no-rows); space++)
        {
            printf("  ");
        }
        for (cols = 0; cols <= rows; cols++)
        {
            if(cols==0 || rows==0)
            n = 1;
            else
            n = n * (rows - cols + 1) / (cols);
            printf("%4d", n);
        }
        
       printf("\n");
    }
    return 0;
}
