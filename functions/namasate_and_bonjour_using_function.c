//write a program to print namasate if user is indian and bonjour if user is french.
#include<stdio.h>

void Namasate(); //function declaration
void Bonjour();

int main(){
char ch;
printf("Enter i for indian and Enter f for french :\n");
scanf("%c" ,&ch);

    if(ch == 'i'){ //function cll
        Namasate();
    }else{
        Bonjour();
    }

    return 0;
}
void Namasate(){ //defination
printf("Namasate\n");
}
void Bonjour(){
    printf("Bonjour\n");
}
