#include<stdio.h>
void func2(int* ptr){
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n",i,*(ptr+i));
    }
    *(ptr + 2) = 4378; //here change the value at ptr
}
int main()
{ int arr[] = {34,89,90,12};

    func2(arr); 
    func2(arr);  
    return 0;
}