//输入一个字符串，一个m,输出从第m个开始的字符串
#include <stdio.h>
#include <string.h>
#define N 100

int main() {
	void test10_7(char a[N],int m);
	char a[N];
	int m,n;
	printf("please enter a string:");
	gets(a);
	printf("\n");
	printf("please enter m:");
	scanf("%d",&m);
	printf("\n");
	test10_7(a,m);
}

void test10_7(char a[N],int m) {
	char *p,b[N];
	int i=1,k=0;
	p=a;
	
	while(i<m) {
		i++;
		p++;
	}
	while(*p!='\0') {
		b[k]=*p;
		p++;
		k++;
	}
	b[k]='\0';
	puts(b);
}