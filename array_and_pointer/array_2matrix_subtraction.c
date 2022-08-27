#include<stdio.h>

int main(){
int first[3][3],second[3][3],subtraction[3][3];
int i,j;
printf("Enter emlemnts of first matrix:-\n");
for ( i = 0; i < 3; i++)
{
  for ( j = 0; j < 3; j++)
  {
    scanf("%d",&first[i][j]);
  }
  
}
printf("Enter elements of second matrix:-\n");
for ( i = 0; i < 3; i++)
{
  for ( j = 0; j < 3; j++)
  {
    scanf("%d",&second[i][j]);
  }
  
}

printf("First matrix:-\n");
for ( i = 0; i < 3; i++)
{
   for ( j = 0; j < 3; j++)
   {
    printf("\t%d",first[i][j]);
   }
   printf("\n");
}

printf("Second matrix:-\n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
       printf("\t%d",second[i][j]);
    }
     printf("\n");
}

printf("Subtraction of both matrix is:-\n");
for ( i = 0; i < 3; i++)
{
  for ( j = 0; j < 3; j++)
  {
   subtraction[i][j]  = first[i][j] - second[i][j];
   printf("\t%d",subtraction[i][j]);
  }
  printf("\n");
}  
      return 0;

}