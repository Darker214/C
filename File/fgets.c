#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
    FILE *fp;
    char str[N + 1];
    if ((fp = fopen("C:\\VsCodeFile\\C\\demo.txt", "r")) == NULL)
    {
        puts("Fail to open file!");
        exit(0);
    }

    while (fgets(str, N, fp) != NULL)//fgets() 遇到换行时，会将换行符一并读取到当前字符串。
    {
        printf("%s", str);
    }

    fclose(fp);
    return 0;
}
