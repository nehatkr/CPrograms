#include <stdio.h>
int main()
{

    int a, b, c, d;
    printf("Enter the number for comparision\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if ((a > b) && (a > c) && (a > d))
        printf("A is the largest number among all of them\n");
    else if ((b > a) && (b > c) && (b > d))
        printf("B is the largest number among all of them\n");
    else if ((c > a) && (c > b) && (c > d))
        printf("C is the largest number among all of them\n");
    else if ((d > a) && (d > b) && (d > c))
        printf("D is the largest number among all of them\n");

    if ((a < b) && (a < c) && (a < d))
        printf("A is the smallest number among all of them\n");
    else if ((b < a) && (b < c) && (b < d))
        printf("B is the smallest number among all of them\n");
    else if ((c < a) && (c < b) && (c < d))
        printf("C is the smallest number among all of them\n");
    else if ((d < a) && (d < b) && (d < c))
        printf("D is the smallest number among all of them\n");

    return 0;
}