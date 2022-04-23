#include<stdio.h>
int main() { 
	int buma12_5();//求补码
	buma12_5();

	return 0;
}

int buma12_5() {
	int i,a,n=31;
	printf("Please input a number:");
	scanf("%d",&a);
	printf("buma is :");
	for(i=0; i<32; i++) {
		printf("%d",(a>>n)&1);//移位并输出,必须要知道整数是以补码的形式存放在计算机当中的
		n--;
	}
	printf("\n");
}

