#include<stdio.h>

int main(){
    char Day; //mon-m ,tue-t, wed-w.....
    printf("Enter Day (1-7)");
    scanf("%s" ,&Day);

    switch (Day)
    {
    case 'm': printf("Monday\n");
        break;
    case 't': printf("Tueaday\n");
        break;
    case 'w': printf("Wednesday\n");
        break;
    case 'T': printf("Thursday\n");
        break;
    case 'f': printf("Friday\n");
        break;
    case 's': printf("Satarday\n");
        break;
    case 'S': printf("Sunday\n");

        break;
    
    default: printf("Not a valid day");
        break;
    }
    return 0;
}
