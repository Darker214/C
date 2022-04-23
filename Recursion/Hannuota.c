#include<stdio.h>
//汉诺塔 
void hannuota(int n,char X,char Y,char Z) //n:移动数  X：开始柱   Y:中转柱    Z:目标柱子
{
    /*
    如果是一个盘子
        直接将A移到C
    否则
        先将X柱子上的n-1个盘子借助Z移到Y    //递归调用
        然后直接将X柱子上的盘子移到Z1
        最后将Y柱子上的n-1个盘子借助X移到Z     //递归调用
     */
    if(n==1)
        printf("the number of %d plate directly %c move to %c\n ",n,X,Z);
    else
    {   
        hannuota(n-1,X,Z,Y);    //递归调用
        printf("the number of %d plate directly %c move to %c\n",n,X,Z);
        hannuota(n-1,Y,X,Z);     //递归调用
    }

}


int main()
{
    int n;
    char ch1='a',ch2='b',ch3='c';
    printf("move number is :");
    scanf("%d",&n);
    hannuota(n,ch1,ch2,ch3);

    return 0;
}