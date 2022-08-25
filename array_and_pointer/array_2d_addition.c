#include<stdio.h>

int main(){
int number[3][3];
int sum = 0;
printf("Enter number\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
{
    scanf("%d",&number[i][j]); 
}    
}
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d\t",number[i][j]);
        sum += number[i][j];
    }
}
    printf("%d\n",sum);

    return 0;
}