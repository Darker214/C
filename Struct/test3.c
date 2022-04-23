//普通结构体变量和结构体指针变量作为函数传参的问题


#include<stdio.h>
#include<string.h>
struct student  //struct student 是结构体类型名     student是结构体名
{
    int num;
    char name[200];
    int age;
};  //分号不能省略


int main(){
    struct student st;     //已经为st分配好了内存
    void fun(struct student * pst);
    void print1(struct student st);
    void print2(struct student * p);
    fun(&st);
    print1(st);  // 结构体变量不能加减乘除，但可以相互赋值
    print2(&st);
    return 0;
}

void fun(struct student *pst){
    (*pst).num= 99;
    strcpy(pst->name,"xiaoli" );//不能够写成pst->name="xiaoli"这是错误的
    pst->age=22;

}
//这种方式耗内存（至少需要开辟208个字节内存空间），耗时间，不推荐
void print1(struct student st){
    printf("%d  %s  %d\n",st.age,st.name,st.num);

}

//传递指针，只需要开辟四个字节内存空间
void print2(struct student * p){
    printf("%d  %s  %d\n",(*p).age,p->name,p->num);

}