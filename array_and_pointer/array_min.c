#include<stdio.h>

int main(){
    int arr[] = { 10,70,45,99,48,30};
    int length = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];

     for (int i = 0; i > length; i++)
    {
        if(arr[i] < min)
        min = arr[i]; 
        
    }
    
        printf("smallest number in given array is %d\n",min);
        return 0;
}