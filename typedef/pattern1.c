#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows:-");
    scanf("%d",&n);
     printf("Enter the number of column:-");
    scanf("%d",&m);

    for (int i = 1; i <= n; i++) //rows
    {
      for (int  j = 1; j <= m; j++) //col
      {
       if (i==1 || j==1 || i==n || j==m )
       {
        printf("*");
       } else{
        printf(" ");
       }
       
      }
      printf("\n");
    }
    
    return 0;
}
/*
*********
*       *
*       *
*********


*/