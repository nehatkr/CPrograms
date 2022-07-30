#include<stdio.h>

int main(){
    int totalrowNo,rows,space,symbol;
    printf("Enter number of rows: ");
    scanf("%d",&totalrowNo);

    for ( rows= 1; rows <= totalrowNo; rows++)//for printing the rows.
    {
        for ( space= 1; space <= (totalrowNo - rows); space++)//for printing the space.
        {
            printf("  ");
        }
        for ( symbol = 1; symbol <= ((2 * rows)-1); symbol ++)//for printing the star or numbers.
        {
            printf("%d " , rows);
        }
        printf("\n");
        
    }
    return 0;
}