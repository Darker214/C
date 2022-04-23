#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;

    
    if ((fp = fopen("C:\\VsCodeFile\\C\\demo1.txt", "r+")) == NULL)
    {
        puts("Fail to open file!");
        exit(0);
    }
 if (ferror(fp))//判断文件操作是否出错,出错时返回非零值，否则返回零值

    {
        puts("读取出错");
    }
    else
    {
        puts("读取成功");
    }

	if (feof(fp))//判断文件是否指向了文件末尾，指向末尾时返回非零值
	 {
		puts("end");
	}else
		puts("not end");
    fclose(fp);
    return 0;
}
