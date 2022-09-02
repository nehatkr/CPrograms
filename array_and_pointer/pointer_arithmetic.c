#include<stdio.h>
int main()
{
    int a = 34;

    int* ptra = &a;
    printf("%d\n", ptra);//here the of ptra is not only increased by 1,it increases by size of int.
    printf("%d\n", ptra + 3);
    printf("%d\n", ptra - 5);
    ++ptra;
    printf("%d\n", ptra);
    return 0;
}
