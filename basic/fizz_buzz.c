// write a programm take number from user and print Fizz if number is multiple of 3 ,Buzz if number is multiple of 5 and FizzBuzz if number is in the multipal of 3 or 5 both

#include<stdio.h>

int main(){
    int number;
    printf("Enter the numbers:-\n");
    scanf("%d",&number);  
    
    if (number%15 == 0) //either we write this or (number % 3 == 0 && number % 5 == 0) this.
    
        printf("FizzBuzz!\n");
    
    else if ((number%3) == 0) 
    
        printf("FIZZ!\n");
    
    else if((number%5) == 0)
        printf("BUZZ!\n");
    
    else
        printf("Entered number is neither Fizz nor Buzz:\n");
    
    
    return 0;
}