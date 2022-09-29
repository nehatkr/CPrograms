#include<stdio.h>

void printstr(char str[]){
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}
int main()
{
    char str[] = {'N','E','H','A','\0'}; //char str[] = "NEHA" (null terminated chacter array).....No need to use null character.
    printstr(str);
    return 0;
}