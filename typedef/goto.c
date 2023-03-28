#include<stdio.h>
int main()
{
    lebel:
    int num;
    for (int i = 0; i<=8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j <=8; j++)
        {
            printf("Enter te number enter 0 to exit\n");
            scanf("%d",&num);
            if (num == 0)
            {
                goto lebel;
            }
            
        }
        
    }
    
    return 0;
}