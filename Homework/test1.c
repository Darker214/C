#include<stdio.h>
int main()
{
    int x,y,z;
    x=y=z=0;
    ++x||++y&&++z;//因为&&的优先级高于||，所以该表达式等于  ++x||(++y&&++z),所以表达式是一个或表达式
    printf("%d,%d,%d\n",x,y,z);

    x=y=z=0;
    ++x&&++y||++z;//&&的优先级高于||，所以该表达式等于 (++x&&++y)||++z,表达式是一个或表达式
    printf("%d,%d,%d",x,y,z);

    return 0;
}