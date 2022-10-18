#include <stdio.h>
#include <string.h>
union student // only one member is used  at a time ,and then union allocate largest size memory among them and then print all the members in that size
{
    int id;
    int marks;
    char Fav_char;
    char name[34];
};

int main()
{
    union student Shubham, Ravi, Abhi; // local variable
    Shubham.id = 45;
    Ravi.id = 35;
    Abhi.id = 65;
    Ravi.marks = 453;
    Shubham.marks = 334;
    Abhi.marks = 478;
    Ravi.Fav_char = 'R';
    Shubham.Fav_char = 'S';
    Abhi.Fav_char = 'A';

    strcpy(Shubham.name, "suman");

    printf("Shubham got %d marks \n", Shubham.marks);
    printf("Ravi got %d marks \n", Ravi.marks);
    printf("Abhi got %d marks \n", Abhi.marks);
    printf("Shubham's id is: %d \n", Shubham.id);
    printf("Ravi's id is: %d \n", Shubham.id);
    printf("Abhi's id is: %d \n", Shubham.id);
    printf("Shubham's fav character is: %c \n", Shubham.Fav_char);
    printf("Ravi's fav character is: %c \n", Ravi.Fav_char);
    printf("Abhi's fav character is: %c \n", Abhi.Fav_char);

    printf("Shubham's name is %s\n", Shubham.name);
    return 0;
}
