//栈的定义
//栈和堆表示数据分配的方式   静态的或是局部变量是以压栈出栈的方式分配内存  ，动态内存是以一种堆排序的方式分配内存
//凡是静态分配都是在栈里分配的  ，有操作系统分配
//凡是动态分配都是在堆里分配的 ， 有程序员手动分配
#include<stdio.h>
#include<malloc.h>

int main()
{
    int i;  //i是在栈里分配
    int * p=(int *)malloc(100);//p是在栈里分配   malloc分配的100个动态内存是在堆里分配的

    return 0;
}

void f(int k)
{
    int m;  //m在栈里分配
    double * q=(double *)malloc(200);//q在栈里分配   malloc分配的200动态内存是在堆区分配的
}