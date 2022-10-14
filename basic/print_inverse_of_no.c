#include <stdio.h>
int main()
{
    int number, remainder, reverse = 0;
    printf("Enter any number to reverse\n");
    scanf("%d", &number);

    while (number > 0)                    //suppose entered no is 1234
    {
        remainder = number % 10;           //here remainder = 1234 % 10 => 4
        reverse = reverse*10 + remainder;  //reverse = 0 *10 + 4 => 4............here we can print reaminder(4) as a first digit
        number = number/10;                //number = 1234/10 => 123........again loop will exacute 
    }
    printf("Reverse of entered number is:%d\n",reverse);
    return 0;
}