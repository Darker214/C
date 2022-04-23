#include<stdio.h>

typedef struct Student
{
    int num;
    int age;
    char sex;
}ST;        //struct Student等价于ST

int main(){
    ST st; //等价于struct Student st;
    ST * pst=&st; //等价于struct Student * pst;
    st.age=22;
    printf("%d",pst->age); 

    return 0;
}