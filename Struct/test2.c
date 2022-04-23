//结构体指针的两种方式

#include<stdio.h>
#include<string.h>
struct student  //struct student 是结构体类型名     student是结构体名
{
    int num;
    char name[200];
    int age;
};  //分号不能省略


int main(){
    struct student st = {1000,"xiaoming",22}; //初始化    st是结构体变量名
    struct student * pst;
    pst=&st;
    pst->num = 99; //规定pst->num等价于 (*pst).num        而（*pst）.num等价于st.num         所以pst->num等价于st.num
    printf("%d  %s  %d \n",(*pst).num,(*pst).name,(*pst).age);
    printf("%d  %s  %d \n",pst->num,pst->name,pst->age);// pst->num:pst所指向的结构体变量中的num成员
    return 0;
}