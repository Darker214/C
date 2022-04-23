//计算阶乘的和,
#include<stdio.h>

int main()
{
    int s=0,t=1,k;
    printf("please enter a number:");   
    scanf("%d",&k); //输入一个数，比如4，则计算4的阶乘的和=1！+2！+3！+4！
    for(int n=1;n<=k;n++)
    {
        t*=n;      
         s+=t;
    }
    printf("%d",s);
}