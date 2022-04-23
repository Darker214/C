//输出9*9成法口诀。共9行9列，i控制行，j控制列。

#include<stdio.h>
int main()
{
    int i,j,result;
    for ( i = 1; i < 10; i++)
    {
        for ( j = 1; j < i+1; j++)
        {
            result=i*j;
            printf("%d*%d=%-6d\t",j,i,result);//-6表示左对齐，占6位 \t：水平制表符，相当于输入一个tab键，大概8个字符（根据开发环境定义）
        }
        printf("\n");
    }
    

    return 0;
}