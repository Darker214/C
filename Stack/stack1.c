/*
动态栈（链式栈）
先进后出
*/

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>      //exist
#include<stdbool.h>        //bool

typedef struct Node{
    int data;       //数据域
    struct Node *pNext; //指针域
}NODE, *PNODE;      

typedef struct stack    //创建一个栈结构体，该结构体中有两个成员，一个成员指向栈顶，一个指向栈底
{
    PNODE pTop;     //指向栈顶
    PNODE pBottom;  //指向栈底，此栈底不存储数据，只是便于操作（类似于链表的头结点）
}STACK, * PSTACK;   //PSTACK 等价于struct stack *

void init(PSTACK);      //造出一个空栈，pTop和pBottom指向栈底，（类似于链表的头结点）
void push(PSTACK,int);  //压栈
void traverse(PSTACK);  //遍历
bool pop(PSTACK,int *); //出栈
bool empty(PSTACK); //判断栈是否为空
void clear(PSTACK); //清空栈


int main()
{
    STACK S;    //等价于 struct stack
    int val;
    init(&S);       //目的是造出一个空栈
    push(&S,1);       //压栈
    push(&S,2);
    push(&S,3);
    push(&S,4);
    push(&S,5);
    push(&S,6);
    
    if(pop(&S,&val))
    {
        printf("succeed\n");

    }
    else
        printf("error\n");
    traverse(&S);
    clear(&S);
    traverse(&S);      //遍历输出

    return 0;
}


void init(PSTACK pS)
{
    pS->pTop=(PNODE)malloc(sizeof(NODE));   //制造出一个无效的节点，让pTop指向他
    if (NULL==pS->pTop)
        {
            printf("error\n");
            exit(-1);
        }
    else
        {
            pS->pBottom=pS->pTop;   //pTop和pBottom同时指向没有实际含义的节点
            pS->pTop->pNext=NULL;//pS->pBottom->pNext=NULL  此节点指针域为空
        }
}


void push(PSTACK pS,int val)
{
    PNODE pNew=(PNODE)malloc(sizeof(NODE)); //创建一个新的节点
    pNew->data=val; //给节点的数据域赋值
    pNew->pNext=pS->pTop;   //让新的节点去指向原来的栈顶
    pS->pTop=pNew;  //pTop去指向新的栈顶
}



void traverse(PSTACK pS)
{
    PNODE p=pS->pTop;   //创建一个新的指针p,让p去指向栈顶
    while (p!=pS->pBottom)  //如果p没有指向栈底
    {
        printf("%d  ",p->data); //输出p指向的数据域
        p=p->pNext; //让p去指向下面一个节点
    }
    printf("\n");
}


bool pop(PSTACK pS,int * val)
{   
    if (empty(pS))  
    {
        return false;
    }
    else
    {
        PNODE r=pS->pTop;   //创建一个新的指针r,去指向栈顶
        *val=r->data;   //栈顶的数据域的数据赋给val保存
        pS->pTop=r->pNext;  //让pTop去指向栈顶下面的节点 ,让下面的节点成为新的栈顶
        free(r);    //释放原来的栈顶
        r=NULL;     //让指针r指向空

        return true;
    }
}

bool empty(PSTACK sP)
{
    if(sP->pBottom==sP->pTop)   //如果pBottom和pTop指向栈底（无意义的节点）
       return true;         //则判断为空，因为pBottom永远指向栈底（无用的节点）
    else
       return false;  
}



void clear(PSTACK pS)
{
    if (empty(pS))
    {
        return;
    }
    else    //此步骤的目的是释放内存
    {
        PNODE p=pS->pTop;   //创建一个新的指针p,去指向栈顶
        PNODE q=NULL;   //创建一个空的指针

        while (p!=pS->pBottom)  //判断p是否指向栈底
        {
            q=p->pNext;     //让q去指向p下面的一个节点
            free(p);    //释放p
            p=q;    //让p再去指向新的栈顶   
        }
        pS->pTop=pS->pBottom;       //让pTop和pBottom同时指向栈底，此时栈为空
    }
}


