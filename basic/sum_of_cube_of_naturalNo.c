/* Sum of Cubes of n Natural Numbers */

#include <stdio.h>
#include <math.h>

int main()
{
  int Number, Sum = 0;

  printf("\n Please Enter any positive integer \n");
  scanf(" %d",&Number);

  Sum = pow(((Number * (Number + 1))/ 2), 2);
 
  printf("\n The Sum of Series for %d = %d ",Number, Sum);
}