#include<stdio.h> //keep taking number as input from user until user enters a odd number.

int main(){

    int n;
    do
    {
        printf("Enter number\n");
        scanf("%d" ,&n);
        printf("%d\n" ,n);
         if(n % 2 != 0){
            break;
         }
    } while (1);
    printf("Number is odd\n");
    
    return 0;
}
