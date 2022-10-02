#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "Neha";
    char s2 []= "Rahul";
    char s3[54];
    //puts(strcat(s1,s2));
    printf("The length  of  s1 %lu\n",strlen(s1));
     printf("The length  of  s1 %lu\n",strlen(s2));
      //printf("The reversed string is:");
     // puts(strrev(s1));

      printf("The strcmp for s1 and s2 returned %d:",strcmp(s1,s2));


    
    return 0;
}