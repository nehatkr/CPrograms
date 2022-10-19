#include<stdio.h>

void arrayrev(int arr[]){
    int temp;
for (int i = 0; i < 9/2; i++)
{
    //swap item arr[i] with arr[8-i] 
    temp = arr[i]; //temp = 2 
    arr[i] = arr[8-i];  //arr[i] = 45
    arr[8-i] = temp;
}
}
void arrayprint(int arr[])
{
for (int i = 0; i < 9; i++)
{
    printf("The value of element %d is %d\n",i,arr[i]);
}
}

int main(){
    int arr[] = {2,4,5,3,6,9,8,23,45};
printf("Before revering the array\n ") ;
arrayprint(arr);

arrayrev(arr); 
printf("\nAfter revering the array\n ") ;
arrayprint(arr);

    return 0;
}