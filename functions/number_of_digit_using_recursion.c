#include<stdio.h>
 int numofdigit(int n1);

int main(){
    int n1, count;
    printf("count the digit of number :\n");
    printf("Enter the number :\n");
    scanf("%d", &n1);

    count = numofdigit(n1);
    printf("the number of digit in the given number is : %d",count);
    return 0;
}
    int numofdigit(int n1){
        static int count=0;
        if(n1!=0){
            count++;
            numofdigit(n1/10);
        }
        return count;
}