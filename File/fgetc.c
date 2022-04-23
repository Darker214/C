#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;

    //如果文件不存在，给出提示并退出
    if ((fp = fopen("C:\\VsCodeFile\\C\\demo.txt", "rt")) == NULL)
    {
        puts("Fail to open file!");
        exit(0);
    }

    //每次读取一个字节，直到读取完毕
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    putchar('\n'); //输出换行符

    fclose(fp);
    return 0;
}
