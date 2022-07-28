#include<stdio.h>

int main(){
int dimX, dimY, length,width;
printf("Enter dimension of the rectangle :\n");
scanf("%d %d" ,&dimX, &dimY);

if (dimX>dimY)
{
    length=dimX;
    width=dimY;
}
else
{ 
    width=dimX;
    length=dimY;
}
for (int i = 1; i <= width; i++)
{
    for(int j = 1; j <= length; j++){
        printf("* ");
    }
    printf("\n");
}

    return 0;
}
