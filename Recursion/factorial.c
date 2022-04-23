//用递归求阶乘

#include<stdio.h>

long f(long n)
{
    if(1==n)
        return 1;
    else
        return f(n-1)*n;
    
}

int main()
{
    
    int n,mult;
    printf("please enter a number :\n");
    scanf("%d",&n);
    mult=f(n);
    printf("%d factorial is %d",n,mult);
    
    // printf("%d",f(4));
    return 0;
}



