#include<stdio.h>

int main(){
int a[10] = {23,56,66,78,94,31,44,67,45,22};
printf("Array in reverse order\n");
for (int i = 9; i >= 0; i--)
{
    printf("%d  ",a[i]);
}
    return 0;
}