#include<stdio.h>

int main(){
    int n, rows;
    printf("Enter the number of rows ");
    scanf("%d",&rows);

    for (int i = 1; i <=rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
       printf("\n"); 
    }
    
return 0;
//if we print the value of i then pattern is 
//1
//22
//333
//4444....
//if we print the value of j then pattern is
//1
//12
//123
//1234......
}