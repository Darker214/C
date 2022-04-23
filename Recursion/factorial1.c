//用循环求阶乘

#include<stdio.h>

int main()
{
    int val;
    int i,mult=1;
    printf("please enter a number :\n");
    scanf("%d",&val);
    for(i=1;i<=val;i++)
        mult=mult*i;
    printf("%d",mult);
    return 0;
}