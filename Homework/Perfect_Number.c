#include <stdio.h>
int main()//完数：真因子的和恰好等于它本身
{
    int a, b, c;
    for (a = 2; a <= 1000; a++)
    {
        c = 1;                       //初始化因子之和c为1
        for (b = 2; b <= a / 2; b++) //寻找在1到a之间，有多少a的因子
            if (a % b == 0)          //如果a能整除b，则b为a的因子

                c = c + b; //将因子累加

        if (c == a)
        { //如果因子之和等于这个数

            printf("%d its factors are 1", a); //输出该数
            for (b = 2; b <= a / 2; b++)
                if (a % b == 0)
                    printf(",%d", b); //输出该因子
            printf("\n");
        }
    }
    return 0;
}