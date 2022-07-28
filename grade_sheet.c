#include<stdio.h>

int main(){

    int marks;
    printf("Enter number between (0-100) :");
    scanf("%d" ,&marks);

    if (marks < 30)
    {
        printf("grade C\n");
        
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("grade B\n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("grade A\n");
    }
    else{
        printf("A+\n");
    }
 
    return 0;
}
