//write a program for printing a table.

#include<stdio.h>

int main(){

    int i, n, table;
    printf("Enter the number to print it's table: ");
    scanf("%d" ,&n);
    for ( i = 1; i <= 10; i++)
    {
        table = n * i;
        printf("%d x %d = %d\n" ,n, i, table);
    }
    
    return 0;
}