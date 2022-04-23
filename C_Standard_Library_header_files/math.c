/*
    asin()=asinf()=asinl():计算反正弦
    abs():计算整数值的绝对值，在printf中使用

 */

#include<stdio.h>
#include<math.h>
int main()
{
    double result,num;
    double x=0.5;

    int k=-99,j=-22;
    num=abs(j);//错误
   // result=asin(x);
    
    //printf("%f\n",result);
    
    printf("%d\n",abs(k));

    
    return 0;
}