#include<stdio.h>
#include<stdlib.h>

int main(){

int first[10][10],second[10][10],multi[10][10];
int r1,r2,c1,c2,i,j,k,sum=0;

printf("Enter the number of rows and columns of first matrix:-");
scanf("%d%d",&r1,&c1);

printf("Enter the element of first matrix:-\n");
for ( i = 0; i < r1; i++)
{
 for ( j = 0; j < c1; j++)
 {
    scanf("%d",&first[i][j]);
 } 
}

printf("Enter the number of rows and columns of second matrix:-");
scanf("%d%d",&r2,&c2);
if(c1 != r2)
{
printf("Matrix multiplication not possible:");
exit(0);
}

printf("Enter the element of second matrix:-\n");
for ( i = 0; i < r2; i++)
{
   for ( j = 0; j < c2; j++)
   {
    scanf("%d",&second[i][j]);
   }
   
}
for ( i = 0; i <r1 ; i++)
{
    for ( j = 0; j <c2 ; j++)
    {
        for ( k = 0; k < c1; k++)//here we take r2 or c1 any value becz value of r2 and c1 must be same for matrix multi.
        {
            sum = sum + first[i][k] * second[k][j];
        }
        multi[i][j] = sum;
        sum = 0;
    }
    
}
printf("Element of first matrix:-\n");
for ( i = 0; i < r1; i++)
{
  for ( j = 0; j < c1; j++)
  {
   printf("\t%d",first[i][j]);
  }
  printf("\n");
}

printf("Element of first matrix:-\n");
for ( i = 0; i < r2; i++)
{
  for ( j = 0; j < c2; j++)
  {
   printf("\t%d",second[i][j]);
  }
  printf("\n");
}

printf("Multiplication of two matrix:-\n");
for ( i = 0; i < r1; i++)
{
  for ( j = 0; j < c2; j++)//here we take c2 bze after multi. of r1*c1,r2*c2 ,we get the value of r1 and c2 as a matrix.(must:c1=r2)
  {
   printf("\t%d",multi[i][j]);
  }
  printf("\n");
}
    return 0;
}