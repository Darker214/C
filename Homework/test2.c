//编写程序让用户输入5对整数，输出每对数中较大者

#include<stdio.h>

int main()
{
    int a[5][2];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        if (a[i][0]>a[i][1])
        {
            printf("%d",a[i][0]);
        }
        else
        printf("%d",a[i][1]);
        
    }

    return 0;
}