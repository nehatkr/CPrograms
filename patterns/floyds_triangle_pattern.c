#include<stdio.h>

int main(){
    int i, j, number=0,rows;
    printf("Enter number of rows :\n");
    scanf("%d", &rows);
    for ( i = 1; i <=rows ; i++)
    {
        for ( j = 1; j < i; j++)
        {   number++;
            printf("%d ", number);
        }
        printf("\n");
    }
    
    return 0;
}