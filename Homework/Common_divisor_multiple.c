//计算最大公约数及最小公倍数
#include<stdio.h>

int main()
{
    int a,b,num1,num2,temp;
    printf("please enter two number :\n");
    scanf("%d,%d",&num1,&num2);
    // if(num1<num2)
    // {  
    //     temp=num1;
    //     num1=num2;
    //     num2=temp;
    // }
    a=num1,b=num2;
    while (b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    printf("The maximum common divisor is %d\n",a);//最大公约数是
    printf("The minimun common multiple is %d\n",num1*num2/a);//最小公倍数是
    return 0;
}