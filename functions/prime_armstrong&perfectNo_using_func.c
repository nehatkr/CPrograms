/* 
c program to check prime ,armstrong and perfect number using function.
*/
#include<stdio.h>
#include<math.h>

//function decelation
int isprime(int num);
int isArmstrong(int num);
int isperfect(int num);

int main(){
    int num;
    printf('Enter any number:');
    scanf("%d",&num);
//call isprime() functions
if(isprime(num)){
    printf("%d is prime number\n",num);
}
else{
    printf("%d is not a prime number\n",num);
}
//call isArmstrong() functions
if(isArmstrong(num)){
    printf("%d is Armstrong number\n",num);
}
else{
    printf("%d is not a armstrong number\n",num);
}
//call isperfect() functions
if(isperfect(num)){
    printf("%d is perfect number\n",num);
}
else{
    printf("%d is not a perfect number\n",num);
}
return 0;
}


/*
check whether a number is prime or not.
returns 1 if the is prime otherwisw 0.
*/
int isprime(int num)
{
    int i;
    for ( i = 2; i <= num/2; i++)
    {
       /*
       if the number is divisible by any number
       other than 1 and itself then it is not prime
       */
      if(num%i == 0){
        return 0;
      }
    }
    return 1;
}
/**
 * Check whether a number is Armstrong number or not. 
 * Returns 1 if the number is Armstrong number otherwise 0.
 */
int isArmstrong(int num) 
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    
    originalNum = num;

    /* Find total digits in num */
    digits = (int) log10(num) + 1;

    /*
     * Calculate sum of power of digits
     */
    while(num > 0)
    {
        // Extract the last digit
        lastDigit = num % 10;

        // Compute sum of power of last digit
        sum = sum + round(pow(lastDigit, digits));

        // Remove the last digit
        num = num / 10;
    }
    
    return (originalNum == sum);
}



/**
 * Check whether the number is perfect number or not. 
 * Returns 1 if the number is perfect otherwise 0.
 */
int isPerfect(int num) 
{
    int i, sum, n;
    sum = 0;
    n =num;
    for ( i = 1; i < n; i++)
    {
        //if i is a divisor of num
        if(n%i == 0){
            sum += i;
        }
    }
    return (num == sum);
}
    