#include<stdio.h>
int  add(int a,int b){ //dec
   int sum = a+b; //def
    return sum;
}

void main(){
    
    int a=6;
    int b=7;
    add(a,b); //cll
    printf("%d",add(a,b));

    return ;
}
