#include<stdio.h>
#include<stdlib.h>
#define N 5
int main(){
    //从键盘输入的数据放入a，从文件读取的数据放入b
    int a[N], b[N];
    int i, size = sizeof(int);
    FILE *fp;

    if( (fp=fopen("C:\\VsCodeFile\\C\\demo1.txt", "wb+")) == NULL ){  //以二进制方式打开,demo1中无法查看
        puts("Fail to open file!");
        exit(0);
    }
  
    
    printf("please input number:");//从键盘输入数据 并保存到数组a
    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    
    fwrite(a, size, N, fp); //或者fwrite(a, sizeof(int), N, fp);//将数组a的内容写入到文件
    
    rewind(fp);//将文件中的位置指针重新定位到文件开头
   
    fread(b, size, N, fp); //从文件读取内容并保存到数组b
    
    for(i=0; i<N; i++){//在屏幕上显示数组b的内容
        printf("%d ", b[i]);
    }
    printf("\n");

    fclose(fp);
    return 0;
}