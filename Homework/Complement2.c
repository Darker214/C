#include<stdio.h>
#include<math.h>
int main() {
	int buma();
	int i;
	printf("please input number:");
	scanf("%d",&i);
	buma(i);
	return 0;
}
int buma(int i) {
	if(i>=0) {
		int  n = 31, b[32]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		for (; i; i>>=1)
			b[n--] = i&1;  //i的二进制与1做位运算，如果都是1，把1赋值给b,否则赋值0
		printf("yuanma :");
		for (n=0; n<32; n++ )
			printf("%d", b[n]);
		printf("\n");
		printf("fanma  :");
		for (n=0; n<32; n++ )
			printf("%d",b[n]);
		printf("\n");
		printf("buma   :");
		for (n=0; n<32; n++ )
			printf("%d",b[n]);
		printf("\n");
	} else {   //如果是负数，则用绝对值变为正数，然后数组第一个变成1

		int k;
		k=abs(i);
		int m=31,c[32]= {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		for (; k; k>>=1)
			c[m--] = k&1;  //k的二进制与1做位运算，如果都是1，把1赋值给c,否则赋值0
		printf("yuanma :");
		for (m=0; m<32; m++ )
			printf("%d", c[m]);
		printf("\n");
		for(m=1; m<32; m++) {//求反码，如果保持第一位符号位不变，如果其余位是0，则变为1，是1，变为0
			if(c[m]==0)
				c[m]=1;
			else c[m]=0;

		}
		printf("fanma  :");
		for (m=0; m<32; m++ )
			printf("%d",c[m]);
		printf("\n");

		for(m=31; m>=0; m--)	//求补码，从右边第一个开始+1，如果是0，则加1，终止循环，如果是1，变为0，则第二位再次验证是否为0或1，依次循环
			if(c[m]==0) {
				c[m]+=1;
				break;
			} else if(c[m]==1) {
				c[m]=c[m]-1;
			}


		printf("buma   :");
		for (m=0; m<32; m++ )
			printf("%d",c[m]);
		printf("\n");

	}
}

