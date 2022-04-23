#include<stdio.h>

int main()
{
    int x=15;
    int j=11;
    float y=0.5;
    float k=44.6;
    char c='a';
    char s[]="CHINA";
    printf("%d\n",x);
    printf("%-5d\n",x); //5表示x所占字符数为5    有-表示左对齐输出，没有表示右对齐输出
    printf("%5d\n",x); //5表示x所占字符数为5  没有加-，所以是右对齐
    printf("%05d\n",x); //0表示指定空位填0
    printf("\n\n\n");
    
    printf("%.4f\n",y); //0.4表示小数位数是4位，如果没有这个，则默认小数位数6位
    printf("%.4f\n",k);
    printf("%f\n",k);//整数部分全部输出，并输出6位小数
    printf("%5.2f\n",y);//输出一共占5列，其中有2位小数，如果数值宽度小于5，则左端补空格
    printf("\n\n\n");



    printf("%x\n",x);//以无符号16进制形式输出  ，lx长整型
    printf("%u\n",j);//以无符号10进制形式输出   lu长整型
    printf("\n\n\n");



    printf("%c,%d\n",c,c);//输出一个字符
    printf("%s,%d\n",s,sizeof(s));//输出一个字符串
    printf("%10s\n",s); //输出的字符串占10列，如果字符串本身长度大于10，则突破10的限制，将字符串全部输出，若长度小于10，则左边补空格
    printf("%-10s\n",s);//左对齐，右边补空格
    printf("%3s\n",s);  //突破3的限制
    printf("%10.2s\n",s);//输出占10列，只取字符串中左端2个字符，这2个字符输出在10列的右侧，左边补空格
    printf("%-10.2s\n",s);//靠左对齐
    printf("\n\n\n");

    printf("%e\n",k);//数字部分输出6位小数，
    printf("%5.2e\n",k);//5：输出的数据所占的宽度为5,数字部分的小数位数为2
    printf("\n\n\n");

    //如果想输出%号
    printf("%%");



    return 0;
}