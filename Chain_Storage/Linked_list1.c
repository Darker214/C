#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node
{
    int data;//数据域
    struct Node * pNext;//指针域
}NODE,*PNODE;  //NODE等价于struct Node , PNODE等价于struct Node *

PNODE create_list();
void traverse_list(PNODE pHead);
bool is_empty(PNODE pHead);
int length_list(PNODE pHead);
bool insert_list(PNODE pHead,int ,int);
bool delete_list(PNODE pHead, int ,int *);
void sort_list(PNODE pHead);

int main()
{
    PNODE  pHead = NULL; //等价于 struct Node * pHead = NULL;
    pHead = create_list();//create_list()功能：创建一个非循环单链表，并将该链表的头结点的地址付给pHead
    traverse_list(pHead);
    int len=length_list(pHead);
    int val;
    // printf("linked_list length is:%d\n",len);
    insert_list(pHead,4,53);
    // sort_list(pHead);
    // if(delete_list(pHead,4,&val))
    // {
    //     printf("delete succeed,delete element is %d\n",val);
    // }
    // else
    // {
    //     printf("delete error\n");
    // }
    traverse_list(pHead);
    // if(is_empty(pHead))
    //     printf("linked_list is empty");
    // else
    //     printf("linked_list is not empty");

    return 0;
}

PNODE create_list()
{
    int len;//链表节点个数
    int val;//用来临时存放用户输入的节点的值
    
    PNODE pHead = (PNODE)malloc(sizeof(NODE));// 生成一个头结点 ，让头指针pHead指向头结点
    if(NULL==pHead)
    {
        printf("error!");
        exit(-1);
    }

    PNODE pTail=pHead;//生成一个尾指针pTail，永远指向尾节点 当链表为空，pTail和pHead都指向头结点
    pTail->pNext = NULL;//pTail指向尾节点，尾节点的指针域为空NULL
    
    printf("please enter a length of linked_list:len=");
    scanf("%d",&len);//输入链表的长度，存储到len中

    for (int i = 0; i < len; i++)
    {
        printf("please enter %d value:",i+1);
        scanf("%d",&val);//输入第几个节点的值，存储到val中

        PNODE pNew = (PNODE)malloc(sizeof(NODE));//创建一个临时节点，让指针pNew去指向它
        if (NULL==pNew)//判断分配内存是否成功
        {
            printf("error!");//分配内存失败
            exit(-1);//退出程序
        }
        pNew->data=val;//把值val赋给临时节点的数据域
        pTail->pNext=pNew;//把临时节点的地址赋给尾节点的指针域，执行完，就把节点挂在了原链表的后面
        pNew->pNext=NULL;//此时pNew是最后一个节点，也就是尾节点，所以指针域为空
        pTail = pNew;//让尾指针去指向最后一个节点pNew，尾指针永远指向尾节点，以便下次创建新的节点使用

    }
    return pHead;

}


void traverse_list(PNODE pHead)
{
    PNODE p = pHead->pNext;//让p指向首节点
    while (NULL!=p)//p的值为空，则说明p没有指向任何节点，停止循环
    {
        printf("%d ",p->data);
        p=p->pNext;//让P指向下一个节点 ,当尾结点的指针域NULL付给p,p指向空,循环结束
    }
    printf("\n");
}

bool is_empty(PNODE pHead)
{
    if(NULL==pHead->pNext)//判断头指针是否指向头结点，如果是，则没有任何一个节点，头结点的指针域为空
        return true;//返回TRUE，表示链表为空
    else
        return false;
}

//求链表长度
int length_list(PNODE pHead)
{
    PNODE p=pHead->pNext;//临时p指针去指向首节点
    int len=0;
    while (NULL!=p)//判断若p不为空，也就是说p指向了某个节点
    {
        len++;//则p+1
        p=p->pNext;//p指向向下一个节点
    }
    
    return len;
}

//选择排序
void sort_list(PNODE pHead)
{
    int t,i,j;
    int len=length_list(pHead);//先求出链表的长度
    PNODE p,q;

    for ( i=0,p = pHead->pNext; i < len-1; i++,p=p->pNext)//让p去指向首节点
    {
        for ( j = i+1,q=p->pNext; j < len; j++,q=q->pNext)//让q去指向首节点的下一个节点
        {
            if(p->data > q->data)  //类似于数组中：a[i]>a[j]
            {
                t = p->data;     //类似于数组中：t=a[i]
                p->data=q->data;//类似于数组中a[i]=a[j]
                q->data=t;//类似于数组中a[j]=t
            }
        }
        
    }
    
    return ;
}

//在pHead所指向链表的第pos个节点的前面插入一个新的节点，该节点的值是val,并且pos的值是从一开始，比如pos是3，则在第三个节点前，第二个节点后插入,插入的节点数据域为val
bool insert_list(PNODE pHead,int pos ,int val)
{
    int i = 0;
    PNODE p=pHead;//让p去指向头结点
    
    //执行循环后p指向第pos个节点，i=pos-1
    while (NULL!=p&&i<pos-1)//若p不为空，也就是p指向某个节点，并且i<pos-1
    {
        p=p->pNext;//p指向下一个节点
        i++;//i+1
    }
    
    if(i>pos-1||NULL==p)//p指向空或i>pos-1，程序异常退出
        return false;

    PNODE pNew = (PNODE)malloc(sizeof(NODE));//分配一个新节点，让pNew去指向它
    if (pNew==NULL)//判断是否分配内存成功
    {
        printf("ERROR");
        exit(-1);
    }
    
    pNew->data=val;//val值赋给新节点数据域 
    PNODE  q=p->pNext;//让q去指向第pos个元素
    p->pNext=pNew;//把pNew挂在第pos-1个节点后面
    pNew->pNext=q;//让新节点的指针域去指向原来第pos个节点

}

//删除节点，传入头指针，删除第pos个节点，把删除的节点数据赋给pVal
bool delete_list(PNODE pHead, int pos ,int * pVal)
{
    int i = 0;
    PNODE p=pHead;//让p去指向头结点
    
    //执行完循环后p指向第pos-1个节点，i=pos-1
    while (NULL!=p->pNext&&i<pos-1)//若p没有指向尾节点，并且i<pos-1
    {
        p=p->pNext;
        i++;
    }
    
    if(i>pos-1||NULL==p->pNext)//p指向尾节点退出
        return false;

   PNODE q = p->pNext;//让q去指向第pos个节点
   *pVal = q->data;//把第pos个节点的值赋给val

   //删除p节点后面的元素
   p->pNext=p->pNext->pNext;//把第pos个的指针域赋给第pos-1个节点的指针域，也就是把第pos个节点的后一个节点挂在第pos-1个节点的后面
   free(q);//释放第pos个节点的内存
   q=NULL;//让q去指向空

}

