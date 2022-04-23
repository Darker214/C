//二维数组和指针的关系

#include<stdio.h>
int main(){
int i ,x[2][2]={1,3,5,7},*p=&x[0][0];
for(i=0;i<4;i+=2)
	printf("%d\n",*(p+i));//输出1 5    *(p+i)等价于p[i]
printf("\n\n");
p=&x[0][0];
for(i=0;i<4;i+=1)
    printf("%d\n",p[i]);//输出1 3 5 7
printf("\n\n");
for(i=0;i<4;i++)
    printf("%d\n",**x);//输出1 1 1 1 
printf("\n\n");
 for(i=0;i<2;i+=1)
    printf("%d\n",*(*(x+i)));//输出1 5
return 0;
}