//如何改变指针的值
#include<stdio.h>
int main(){
    void fun(int ** q);
    int i=10;
    int * p=&i;
    printf("%p\n",p);
    fun(&p);
    printf("%p\n",p);
    return 0;
}
void fun(int ** q){  //变量q可以存放一个指针的地址
    *q=(int *)0xFFFFFFFF;   //*q=p


}