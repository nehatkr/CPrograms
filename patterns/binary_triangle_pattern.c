#include<stdio.h>

int main(){

    int i, j, n;
    printf("Enter row no. :\n");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            if((i+j)%2==0)//if remainder is zero then print 0.
            printf(" 0");
            else{
                printf(" 1");//otherwise print 1.
            }
        }printf("\n");
        
    }
    
    return 0;
}
// first time i=0(outer loop) and j=0 to i,means 0 to 0(inner loop)..now..
//(0+0)%2=0...so here 0 is printed one time
//again i=1 and j=0 to i,means 0 to 1 (j=0,1)..now..
//(1+0)%2!=0 and (1+1)%2=0....so here 1 and 0 printed in second time....so on...
//0
//10
//010
//1010...

