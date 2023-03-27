#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    int a = i++;
    int b = i++;
    int c = ++i;
    int d = ++i;
    int x = a + b + c + d;
    int y = (++j) +
            (j++) +
            (++j) +
            (j++) ;
    printf("%d -> %d -> %d -> %d -> %d but y = %d", a, b, c, d, x, y);
    return 0;
}