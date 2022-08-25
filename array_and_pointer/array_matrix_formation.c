#include<stdio.h>

int main(){

int number[3][3];
int i,j;
printf("Enter number :");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        
        scanf("%d",&number[i][j]);
    }    
}
for ( i = 0; i< 3; i++)
{
    for ( j = 0; j< 3; j++)
    {
        printf("%d\t",number[i][j]);
    }
    printf("\n");
}
    return 0;
}