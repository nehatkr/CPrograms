//write a program to print a no. upto 30 ecxept 15.
#include<stdio.h>

int main(){
 int i;
for ( i = 1; i<=30; i++)
{
    if(i==15){
    continue;
    }
   else{
printf("%d\n" ,i);
} 
} 
    return 0;
}
