#include<stdio.h>
int main(){
int sum_day(int month,int day);
	int leap(int year);
	int year,month,day,days;
	printf("please enter year month day:") ;
	scanf("%d %d %d",&year,&month,&day);
	if(month<=12&&month>0) {

		printf("%d-%d-%d ",year,month,day);
		days=sum_day(month,day); //调用函数sum_day
		if(leap(year)&&month>=3) { //如果是闰年，并且月份大于等于三月份，就加一天
			days=days+1;
		}
		printf("is the %d day of this year\n",days);
	} else printf("error:please enter the correct month!");
	return 0;
}
int sum_day(int month,int day) { //天数计算
	int day_tab[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31}; //定义除闰年外每个月的天数
	int i;
	for(i=1; i<month; i++) {
		day+=day_tab[i]; //累加所在月之前的天数
	}
	return day;
}
int leap(int year) { //判断是否为闰年
	int leap;
	leap=(year%4==0&&year%100!=0||year%400==0);//判断闰年条件
	return leap;
}