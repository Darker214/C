//通过被调函数改变主函数的值

#include<stdio.h>
int main(){
void fun(int *a,int *b);
void fun1(int *a,int *b);
void fun2(int a,int b);
int a=3,b=6,*x=&a, *Y=&b;
 fun(x,Y);
printf("%d,%d\n",*x,*Y);//print 3,6  fun函数并没有改变x,Y中的内容
 fun1(x,Y);
printf("%d,%d\n",*x,*Y);//print 6,3
 fun2(a,b);
printf("%d,%d\n",*x,*Y);//print 6,3
return 0;
}

void fun(int *a,int *b){//不是定义了一个名字叫*b的形参，而是定义了一个形参，该形参名字叫b,它的类型是int *，b只能存放整形变量的地址
	int *k;		//定义了一个指针变量k
	k=a;		//把a中的内容给了k,也就是main函数中a的地址给了k
	a=b;		//把b中的内容给了a,也就是main函数中b的地址给了a
	b=k;		//把k中的内容给了b,也就是main函数中a的地址给了b，此时a指向main函数中的b,b指向main函数中的a,
}

void fun1(int *a,int *b){
	int k;
	k=*a;
	*a=*b;
	*b=k;
}
void fun2(int a,int b){  //并没有对主函数做任何改变
	int k;
	k=a;
	a=b;
	b=k;
}