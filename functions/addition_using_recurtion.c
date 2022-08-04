#include<stdio.h>
int sum(int n);//declaration.

int main(){
    int result = sum(30);
    printf("%d", result);//call.
      return 0;
}
int sum(int n){//difination.
    if(n > 0){
        return n + sum(n-1);
    }else{
        return 0;
    }
}