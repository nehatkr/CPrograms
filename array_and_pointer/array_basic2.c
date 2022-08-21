#include<stdio.h>

int main(){
int marks[2][4] = {{25,44,67,89},
                   {45,78,62,33}};

for (int i = 0; i < 2; i++)
{
   for (int j = 0; j < 4; j++)
   {
     printf("The value of %d, %delement of the array is %d\n",i,j,marks[i][j]);
   }
   
}


    return 0;
}