/* Determinant of a 2 * 2 Matrix */
 
#include<stdio.h>
 
int main()
{
 	int rows, columns, a[2][2], Deter = 0;
  
 	printf("\n Please Enter the 2 * 2 Matrix Elements\n ");
 	for(rows = 0; rows < 2; rows++)
  	{
   		for(columns = 0;columns < 2; columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
    printf("Given matrix:-\n");
    for(rows = 0; rows < 2; rows++)
  	{
   		for(columns = 0;columns < 2; columns++)
    	{
      		printf("  %d",a[rows][columns]);
    	}
        printf("\n");
  	}
     
	Deter = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
  	
  	printf("\n The Determinant of 2 * 2 Matrix = %d", Deter);
 	return 0;
}