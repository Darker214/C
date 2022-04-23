#include<stdio.h>

typedef struct Student
{
    int num;
    int age;
    char sex;
}* PSTU,STU;        //PSTU等价于struct Student *,STU等价于struct Student

int main(){
    STU st; 
    PSTU pst=&st; //等价于struct Student * pst;
    st.age=22;
    printf("%d",pst->age); 

    return 0;
}