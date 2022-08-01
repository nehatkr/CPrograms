#include <stdio.h>
void EvenAndOdd(int m, int n);
 
int main()
{
    int n;
	printf("\n\n Recursion : Print even or odd numbers in a given range :\n");
	printf("-------------------------------------------------------------\n");	
     
    printf(" Input the range to print starting from 1 : ");
    scanf("%d", &n);
     
    printf("\n All even numbers from 1 to %d are : ", n);
    EvenAndOdd(2, n);//call the function EvenAndOdd for even numbers 
     
    printf("\n\n All odd numbers from 1 to %d are : ", n);
    EvenAndOdd(1, n);// call the function EvenAndOdd for odd numbers
    printf("\n\n");
     
    return 0;
}
void EvenAndOdd(int m, int n)
{
    if(m > n)
        return;
    printf("%d  ", m);
    EvenAndOdd(m+2, n);//calling the function EvenAndOdd itself recursively
}
