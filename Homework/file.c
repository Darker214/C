#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 有两个磁盘文件“A”和“B”，各存放一行字母，编程实现下面
// 要求（习题13.5）
// 把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件
// “C”中去。
#define N 100
int i;
int main()
{
    FILE* fp;
    char a;
    char b;
    char c[N];
    char k;//用来冒泡排序临时存放
    if((fp=fopen("C:\\VsCodeFile\\Homework\\A.txt","r"))==NULL)
    {
        printf("ERROR");
        exit(0);
    }
    for ( i = 0; (a=fgetc(fp))!=EOF; i++)
    {
        c[i]=a;
        putchar(a);
        
    }
    putchar('\n');
    fclose(fp);
    if((fp=fopen("C:\\VsCodeFile\\Homework\\B.txt","r"))==NULL)
    {
        printf("ERROR");
        exit(0);
    }
    for ( i; (b=fgetc(fp))!=EOF; i++)
    {
        c[i]=b;
        putchar(b);
        
    }
    putchar('\n');
    fclose(fp);

    for (int i = 0; i<strlen(c); i++)
    {
        for (int j = 0; j < strlen(c)-i-1; j++)
        {
            if (c[j]>c[j+1])
            {
                k=c[j+1];
                c[j+1]=c[j];
                c[j]=k;
            }
            
        }
        

    }
    


    for (int i = 0; c[i]!='\0'; i++)
    {
        putchar(c[i]);
    }
    putchar('\n');
    if((fp=fopen("C:\\VsCodeFile\\Homework\\C.txt","w+"))==NULL)
    {
        printf("ERROR");
        exit(0);
    }
    
    fputs(c,fp);
    fclose(fp);
    return 0;

}

