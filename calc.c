#include<stdio.h> //program for calculator.
#include<stdio.h>

int main(){
    char operator;
    float num1, num2, Result = 0;
    printf("\n Enter any one operator like +, -, /, * :");
    scanf("%c" ,&operator);
    printf("Enter the value of operands num1, num2 \n:");
    scanf("%f%f" ,&num1, &num2);

    switch (operator)
    {
        case '+' : Result = num1 + num2;
        break;
        case '-' : Result = num1 - num2;
        break;
        case '*' : Result = num1 * num2;
        break;
        case '/' : Result = num1 / num2;
        break;

    
    default: printf("\n Invalid calculation");
        break;
    }
    printf("The value = %f" ,Result);

    return 0;
}
