// write a programm take number from user and print Fizz if number is multiple of 3 ,Buzz if number is multiple of 5 and FizzBuzz if number is in the multipal of 3 or 5 both

#include <stdio.h>

int main()
{
    int number;
    printf("Enter the numbers:-\n");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        if (i % 3 == 0) {
            printf("FIZZ");
        }
        if ((i % 5) == 0) {
            printf("BUZZ");
        }
        printf("%d", i);
        printf("\t");
    }
    return 0;
}