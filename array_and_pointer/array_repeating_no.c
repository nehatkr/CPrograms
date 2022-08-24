#include<stdio.h>

int main(){
    int arr[] = { 2,5,3,7,8,9,4,5,2,5};
    int length = sizeof arr/sizeof arr[0];

    printf("Print dublicate element given in array\n");
for ( int i = 0; i < length; i++)
{
    for (int j = i+1; j < length ; j++)
    {
       if(arr[i] == arr[j])
       printf("%d\n",arr[j]);
    }
    
}
    return 0;
}