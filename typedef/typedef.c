#include<stdio.h>
typedef struct student{  //old name
    int marks;
    int id;
    char fav_character;
    char name[35];

}std;   //new name

int main(){
    //typedef <previous_name> <alias_name>;   typedef is use for giving the short  name .
    
   std s1,s2;
    s1.id = 34;
    s2.id = 75;
     printf("Value of s1's ID is :%d\n",s1.id);
       printf("Value of s2's ID is :%d\n",s2.id);
    return 0;
}