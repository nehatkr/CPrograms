#include<stdio.h>
int main(){
    int arr[100],i,num;
    printf("Enter the size of an array\n");
    for ( i = 0; i < num; i++)
    {
        scanf("%d",arr[i]);
    }
    printf("Even number in the array is \n");
    for ( i = 0; i < num; i++)
    {
        if(arr[i]%2==0)
        printf("%d",arr[i]);
    }
    
     printf("Odd number in the array is \n");
    for ( i = 0; i < num; i++)
    {
        if(arr[i]%2!=0)
        printf("%d",arr[i]);
    }
    return 0;
}
