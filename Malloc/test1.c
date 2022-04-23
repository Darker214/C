#include<stdio.h>
#include<malloc.h>

struct student
{
    int age;
    int num;
};

int main(){
    struct student * CreateStudent();
    void ShowStudent(struct student *);
    
    struct student * ps;
    ps=CreateStudent();
    ShowStudent(ps);

    return 0;
}

struct student * CreateStudent(){
    struct student *p = (struct student *)malloc(sizeof(struct student));
    p->age=99;
    p->num=1;
    return p;
}

void ShowStudent(struct student *pst){
    printf("%d  %d",pst->age,(*pst).num);
}



