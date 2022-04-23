#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
int main(){
	FILE *fp;
	char ch;
	char ch1;
	char str[102]={"0"},str2[100];
	char str1[]="xixihh";
	//char str[N+1];
	//打开文件
	//FILE *fp=fopen("C:\\VsCodeFile\\C\\demo.txt","rb+");//以读写方式打开文件，既可以读取，也可以写入，也就是随意更新文件，文件必须存在，否则打开失败，b是以二进制打开，不写默认为t,文本文件
	
	//判断文件是否打开成功
	
	if((fp=fopen("C:\\VsCodeFile\\C\\demo.txt","at+"))==NULL){ 
		printf("Fail to open file!\n");
		exit(0);//退出程序
	}
	//循环读取文件的每一行 数据
	// while (fgets(str,N,fp)!=NULL)
	// {
	// 	printf("%s",str);
	// }

	

	// while ((ch=fgetc(fp))!=EOF)//每次读取一个字节，直到读取完毕
	// {
	// 	putchar(ch);
	// }
	// 	putchar('\n');//输出换行符
	// if (ferror(fp))//判断文件操作是否出错，出错时返回非零值
	// {
	// 	puts("error");
	// }else
	// 	puts("succeed");
	
	// if (feof(fp))//判断文件是否指向了文件末尾，指向末尾时返回非零值
	// {
	// 	puts("end");
	// }else
	// 	puts("not end");
	//   printf("Input a string:\n");
	    //每次从键盘读取一个字符并写入文件
    // while ( (ch1=getchar()) != '\n' ){
	//         fputc(ch1,fp);
	// }
	
	// 	putchar('\n');

	// while (fgets(str,10,fp)!=NULL)
	// {
	// 	puts(str);
	// 	//printf("%s",str);
	// }
	// fputs(str1,fp);
                    
	 printf("Input a string:");
	    gets(str2);
	    strcat(str, "\n");
	    strcat(str, str2);
        fputs(str, fp);

	   fclose(fp);   
	
	return 0;
}
