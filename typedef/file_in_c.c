#include<stdio.h>
int main()
{
    FILE*ptr = NULL;
   // ptr = fopen("myfile2.txt","r");
   // char c = fgetc(ptr);
   // printf("The character  I read was %c\n",c);
    // c = fgetc(ptr);
    //printf("The character  I read was %c\n",c);

   // char str[4];
   // fgets(str, 31, ptr);
   // printf("The string is %s\n",str);
   ptr = fopen("myfile2.txt","w");
   fputc('o',ptr);
   fputs("this is neha",ptr);

    fclose(ptr);
    return 0;
}