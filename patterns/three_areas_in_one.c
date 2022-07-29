#include<stdio.h>//write a function to calculate area of a square ,a rectatangle,a circle
#include<math.h>

float suqarearea(float side);
float circlearea(float rad);
float rectanglearea(float a , float b);


int main(){ 
    float a = 5.0;
    float b = 10.0;
    float side = 6;
    float rad = 2;

    printf("area of rectangle is : %f", rectanglearea(a,b));
    printf("area of circle : %f", circlearea( rad));
    printf("area of square :%f" , squarearea(side));
    return 0;
}
float suqarearea(float side)
{
   return side * side;
}
float circlearea(float rad){
    return 3.14 * rad * rad;
}
float rectanglearea(float a , float b){
    return a * b;
}

