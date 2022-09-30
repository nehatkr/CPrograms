/* C Program to find ASCII Value of Total Characters in a String */
#include <stdio.h>
int main()
{
    char str[100];
    
    printf("\n Please Enter any String  :  ");
    scanf("%s", str);
        
    for( int i = 0; str[i] != '\0'; i++)
    {
        printf(" The ASCII Value of Character %c  = %d \n", str[i], str[i]);
    }
    return 0;
}