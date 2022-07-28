#include<stdio.h>

int main(){
int num;
printf("Enter number of row :");
scanf("%d" ,&num);

for (int i = 1; i <= num; i++)//for rows.
{
    for (int j = 1; j <=num; j++)//for column.
    {
        printf("*");
    }
    printf("\n");
}

    return 0;
}
