#include <stdio.h>

int main()
{
  int year;
 
  printf("\n Please Enter any number you wish \n ");
  scanf("%d", &year);
 
  if (( year%400 == 0)|| (( year%4 == 0 ) &&( year%100 != 0)))
      printf("\n %d is a Leap. \n", year);
  else
      printf("\n %d is not. \n", year);
  
   return 0;
}