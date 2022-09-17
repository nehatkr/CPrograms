/*
 * Given three angles of a triangle, Write a c program to 
 * check whether it is a valid triangle or not 
 */ 
   
#include <stdio.h>  
   
int main() {  
    int angle1, angle2, angle3;  
   
    /* 
     * Take three angles of triangle as input 
     * from user using scanf 
     */ 
    printf("Enter Three Angles of a Triangle\n");  
    scanf("%d %d %d", &angle1, &angle2, &angle3);     
   
    /* 
     *Sum of all three angles of any triangle is 180 degree 
     */ 
    if( angle1 + angle2 + angle3 == 180) {  
        printf("It is a Valid Triangle\n");  
    } else {  
        printf("It is an invalid Triangle");  
    }  
   
    return 0;  
}