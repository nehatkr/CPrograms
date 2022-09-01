#include<stdio.h>

int main(){
int a ,b ,*p1 ,*p2 ,x ,y ,z; 
printf("Enter the value of a and b:-\n");
scanf("%d%d",&a,&b);

p1 = &a;
p2 = &b;
x = (*p1) * (*p2) - 6; 
y = 4 * (*p1 + *p2);

printf("Adderss of a = %p\n",p1);
printf("Adderss of b = %p\n",p2);

printf("\n");

printf("\na = %d,b = %d\n",a,b);
printf("\nx = %d,y = %d\n",x,y);

*p2 = *p2 + 3;//here value of a is changed.
*p1 = *p2 - 5;//here value of b is changed.
z = (*p1) * (*p2) - 6;

printf("\n a = %d, b = %d\n",a,b);
printf("\n z = %d\n",z);
    return 0;
}