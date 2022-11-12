#include <stdio.h>
int main()
{
    int i, num1, num2, max, cm=1;
    // Reading two numbers from user
    printf("Enter any two: ");
    scanf("%d%d", &num1, &num2);
    // Find max number between num1 and num2
    max = (num1 > num2) ? num1 : num2;
    i = max;
    //Loop runs forever till lcm is not found
    while(1)
    {
        if(i%num1 == 0 && i%num2 == 0)
        {
            //If i divides both num1 and num2 then lcm is found hence exit from loop
            cm = i;
            break;
        }
         //If lcm is not found then generate next multiple of max between both numbers
        i += max;
    }
    printf("LCM of %d and %d = %d", num1, num2, cm);
    return 0;
}