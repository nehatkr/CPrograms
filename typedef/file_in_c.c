#include<stdio.h>
int main()
{
    FILE*ptr = NULL;
    ptr = fopen("myfile2.txt","r");
    char c = fgetc(ptr);
    printf("The character  I read was %c\n",c);
     c = fgetc(ptr);
    printf("The character  I read was %c\n",c);

    fclose(ptr);
    return 0;
}