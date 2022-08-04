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
}/*
input=1234
working...1234/10=123(count is 1 ),123/10(count is 2),12/10(count is 3),1/10(count is 4)..{only quotient will consider}
so total number in a digit is 4.
*/