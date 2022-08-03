//sum of first n natural number.
#include<stdio.h>

int sum(int n);

int main(){
    printf("sum is :%d", sum(50));
return 0;
}
int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumN = sum(n-1) + n;
    return sumN;
}