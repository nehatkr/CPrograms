#include<stdio.h>

int b = 34;  //this is the global variable since it is decleared outside the main function
int func1(int b1){
    static int myvar = 0;//static var. save all change in value of var. and reflect accodingly.
    //means we can change the value of decleared variable by using static variable.
    printf("The value of myvar is %d\n",myvar);
    myvar++;

    return myvar + b1;
}
int main2()
{
    int b = 56;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    
    return 0;
}