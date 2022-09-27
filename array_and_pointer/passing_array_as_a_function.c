#include<stdio.h>
int func1(int array[]){
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is :-%d\n",i,array[i]);
    }
    array[0] = 345;//if we change the value then it reflect in to main function.
    return 0;
}
int main()
{
   int arr[] = {23,3,56,78};
   printf("The value at index 0 is :-%d\n",arr[0]);
   func1(arr);
   printf("The value at index 0 is :-%d\n",arr[0]);
    return 0;
}