//下面程序的功能是将一个4×4的数组进行逆时针旋转90度后输出，要求原始数组的数据随机输入，新数组以4行4列的方式输出，请在空白处完善程序。

#include<stdio.h>

int main()
{
    int a[4][4],b[4][4];
    printf("please enter 16 numbers:");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&a[i][j]);
            b[3-j][i]=a[i][j];
        }
        printf("\n");
        
    }
     for (int k = 0; k < 4; k++)
    {
        for (int l = 0; l < 4; l++)
        {
            printf("%4d",a[k][l]);//4d表示占4个位置，右对齐
        }
        printf("\n");
    }
    printf("\n");
    for (int k = 0; k < 4; k++)
    {
        for (int l = 0; l < 4; l++)
        {
            printf("%-4d",b[k][l]);//-4d表示左对齐，占四位
        }
        printf("\n");
    }
    


    return 0;
}