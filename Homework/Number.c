//给出一个不多于五位的正整数，要求：
//1求出它是几位数
//2分别输出每一位数字
//3逆序输出各位数值，例原数为321，输出123 
#include<stdio.h>
int main(){
int num,count,temp,a,b,c,d,e;
	printf("please input num:");
	scanf("%d",&num);
	temp=num;
	if(num<=99999) {
		do {
			num=num/10;
			count++;
		} while (num<=99999&&num>0);

		printf("weishu:%d\n",count);
	} else 	printf("error");
	switch(count) {
		case 5:
			a=temp/10000;//求万位
			b=temp/1000%10;//求千位
			c=temp/100%10;//求百位
			d=temp/10%10;//求十位
			e=temp%10;//求个位
			printf("%d %d %d %d %d\n",a,b,c,d,e);
			break;
		case 4:
			b=temp/1000%10;
			c=temp/100%10;
			d=temp/10%10;
			e=temp%10;
			printf("%d %d %d %d\n",b,c,d,e);
			break;
		case 3:
			c=temp/100%10;
			d=temp/10%10;
			e=temp%10;
			printf("%d %d %d\n",c,d,e);
			break;
		case 2:
			d=temp/10%10;
			e=temp%10;
			printf("%d %d\n",d,e);
			break;
		case 1:
			e=temp%10;
			printf(" %d\n",e);
			break;
	}
	switch(count) {
		case 5:
			a=temp/10000;
			b=temp/1000%10;
			c=temp/100%10;
			d=temp/10%10;
			e=temp%10;
			printf("%d %d %d %d %d\n",e,d,c,b,a);
			break;
		case 4:
			b=temp/1000%10;
			c=temp/100%10;
			d=temp/10%10;
			e=temp%10;
			printf("%d %d %d %d\n",e,d,c,b);
			break;
		case 3:
			c=temp/100%10;
			d=temp/10%10;
			e=temp%10;
			printf("%d %d %d\n",e,d,c);
			break;
		case 2:
			d=temp/10%10;
			e=temp%10;
			printf("%d %d\n",e,d);
			break;
		case 1:
			e=temp%10;
			printf(" %d\n",e);
		break;
}

    return 0;
}