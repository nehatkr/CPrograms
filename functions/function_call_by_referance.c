#include<stdio.h>
void changevalue(int *address){
    *address = 345;
}
int main(){
    int a = 34, b = 45;
    printf("the value of a now is:- %d\n",a);
    changevalue(&a);
    printf("The value of a noe is :-%d\n",a);
    return 0;
}