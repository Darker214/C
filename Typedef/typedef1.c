#include<stdio.h>

typedef struct Student
{
    int num;
    int age;
    char sex;
}* PST;        //PST等价于struct Student *

int main(){
    struct Student st; 
    PST pst=&st; //等价于struct Student * pst;
    st.age=22;
    printf("%d",pst->age); 

    return 0;
}