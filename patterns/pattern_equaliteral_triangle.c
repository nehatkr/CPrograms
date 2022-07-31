#include<stdio.h>
 int main(){
    int n;
    

    printf("Enter rows :");
    scanf("%d" , &n);
    int z = n*2-1;

    for (int i = n; i >= 1; i--)
    {
        for (int j= n - 1; j >= i; j--)
        {
            printf("  ");
        }
        for (int k = 1; k <=z ; k++)
        {
            printf("* ");
        
        } 
        z -= 2;
        printf("\n");
        
    }
    return 0;
 }