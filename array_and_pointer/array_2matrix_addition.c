#include<stdio.h>

int main(){

int first[3][3],second[3][3],sum[3][3];
int i,j;
printf("Enter first element of a matrix\n ");

for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        scanf("%d",&first[i][j]);
    }   
}
printf("Enter second element of a matrix\n");

for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        scanf("%d",&second[i][j]);
    }
}
printf("First matrix:-\n");
for ( i = 0; i< 3; i++)
{
    for ( j = 0; j< 3; j++)
    {
        printf("\t%d",first[i][j]);
    }
    printf("\n");
}

printf("\n");

printf("second matrix:-\n");
for ( i = 0; i< 3; i++)
{
    for ( j = 0; j< 3; j++)
    {
        printf("\t%d",second[i][j]);
    }
    printf("\n");
}
printf("Sum of entered matrix:-\n");

for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        sum[i][j] = first[i][j] + second[i][j];
        printf("\t%d",sum[i][j]);
    }
    printf("\n");
}

    return 0;
}