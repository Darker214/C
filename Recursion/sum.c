
//用递归求1~100的和
#include<stdio.h>

int f(int n)
{
    if(n==1)
        return 1;
    else
        return f(n-1)+n;
}

int main()
{
    printf("%d",f(100));


    return 0;
}