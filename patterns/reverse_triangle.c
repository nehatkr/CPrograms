#include<stdio.h>

int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);

    for (int i = n; i > 1; i--)
    {
        for (int j = i; j <i+1; j++)
        {
            printf("* ");
        }
       printf("\n"); 
    }
    
return 0;
}
