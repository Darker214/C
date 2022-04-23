#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;

    if ((fp = fopen("C:\\VsCodeFile\\C\\demo.txt", "wt+")) == NULL)
    { //判断文件是否成功打开
        puts("Fail to open file!");
        exit(0);
    }

    printf("Input a string:\n");

    while ((ch = getchar()) != '\n')
    { //每次从键盘读取一个字符并写入文件
        fputc(ch, fp);
    }
