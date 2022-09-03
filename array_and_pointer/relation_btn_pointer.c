#include<stdio.h>
int main()
{
    int arr[] = {2,4,3,6,7,5,8,9,54,34,67,88};
    int *arrayptr = arr;
    printf("Value at position 3 of the array is %d\n",&arr[3]);
     printf("The adderess of first element of  the array is  %d\n",&arr[0]);
     printf("The adderess of first element of  the array is  %d\n",arr);
     printf("The adderess of second element of  the array is  %d\n",&arr[1]);
     printf("The adderess of second element of  the array is  %d\n",arr+1);
     arrayptr++;
     //arr--; This line will throw an error.

     printf("The value at adderess of first element of  the array is  %d\n",*(&arr[0]));
      printf("The value at adderess of first element of  the array is  %d\n",arr[0]);
     printf("The value at adderess of first element of  the array is  %d\n",*(arr));
     printf("The value at adderess of first element of  the array is  %d\n",*(&arr[1]));
     printf("The value at adderess of first element of  the array is  %d\n",*(arr+1));
     

      

    return 0;
}

