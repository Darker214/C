//统计字符数

#include<stdio.h>

int main()
{
    char c;
    int letter = 0,space=0,digit=0,other=0; //letter字母数 space空格数 digit数字数 other其它字符数
    printf("please enter string:\n");
    while ((c=getchar())!='\n')     //判断字符是否为空
    {
        if(c>='a'&&c<='z'||c>='A'&&c<='Z')
            letter++;
        else if(c==' ')
            space++;
        else if (c>='0'&&c<='9')
            digit++;
        else
            other++;
    }
    printf("the number of letters=%d,the number of space=%d,the number of digit=%d,the number of other=%d\n",letter,space,digit,other);
    return 0;   
}