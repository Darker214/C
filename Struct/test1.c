//结构体初始化   结构体是一个复合的数据类型

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
    printf("%d  %s  %d \n",st.num,st.name,st.age);

    struct student st1;
    st1.age=99;
    //st1.name="dahua"; 错误
    strcpy(st1.name,"dahua");
    st1.num=2000;

    printf("%d  %s  %d \n",st1.num,st1.name,st1.age);
    return 0;
}