#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	//打开文件
	//FILE *fp=fopen("C:\\VsCodeFile\\C\\demo.txt","rb+");//以读写方式打开文件，既可以读取，也可以写入，也就是随意更新文件，文件必须存在，否则打开失败，b是以二进制打开，不写默认为t,文本文件
	
	//判断文件是否打开成功
	
	if((fp=fopen("C:\\VsCodeFile\\C\\demo.txt","wt+"))==NULL){ 
		printf("Fail to open file!\n");
		exit(0);//退出程序
	}


	   fclose(fp);   
	
	return 0;
}