//循环队列
//先进先出
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>

typedef struct Queue
{
    int * pBase;
    int front;  //front和rear是数组的下标
    int rear;
}QUEUE;

void init(QUEUE *); //队列初始化  front和rear的下标是0
bool en_queue(QUEUE *,int val);     //入队
void traverse_queue(QUEUE *);      //遍历队列
bool full_queue(QUEUE * pQ);        //判断是否队列已满 条件 (rear+1)%6==front
bool out_queue(QUEUE * pQ,int *pVal);       //出队 ，把出队元素保存到val
bool empty_queue(QUEUE *pQ);            //判断队列是否为空  条件front=rear



int main()
{
    QUEUE Q;
    int val;
    init(&Q);
    en_queue(&Q,1);
    en_queue(&Q,2);
    en_queue(&Q,3);
    en_queue(&Q,4);
    en_queue(&Q,5);
    traverse_queue(&Q);

    if(out_queue(&Q,&val))
    {

            printf("succeed  %d\n",val); //入队成功，入队元素是val
    }
    else
        printf("error");//出队失败
    
    traverse_queue(&Q);
    
    return 0;
}

void init(QUEUE *pQ)
{   
    pQ->pBase=(int*)malloc(sizeof(int)*6);//创建数组长度是6的数组
    pQ->front=0;
    pQ->rear=0;

}

bool en_queue(QUEUE *pQ,int val)
{
    if(full_queue(pQ))    
        return false;

    else
    {
     
        pQ->pBase[pQ->rear]=val;
        pQ->rear=(pQ->rear+1)%6;
        return true;
    }
}

bool full_queue(QUEUE * pQ)
{   
    if ((pQ->rear+1)%6==pQ->front)  //+1取余让数列倒过来，成为循环队列
        return true;
    else    
        return false;
}



void traverse_queue(QUEUE *pQ)
{
    int i = pQ->front;
    while (i!=pQ->rear)
    {
        printf("%d",pQ->pBase[i]);
        i=(i+1)%6;
    }
    printf("\n");
}

bool empty_queue(QUEUE *pQ)
{
    if(pQ->front==pQ->rear)
        return true;
    else
        return false;

}


bool out_queue(QUEUE * pQ,int *pVal)
{
    if(empty_queue(pQ))
        return false ;
    else
    {
        *pVal=pQ->pBase[pQ->front];
        pQ->front=(pQ->front+1)%6;

        return true;
    }

}
