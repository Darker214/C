//连续存储【数组】    用C语言实现Java当中的函数

#include<stdio.h>
#include<stdlib.h>//包含了exit函数
#include<malloc.h>//包含了malloc函数
#include<stdbool.h>//包含了bool类型

//定义了一个数据类型，该数据类型的名字叫做struct Arr,该数据类型含有三个成员，分别是pBase，len，cnt
struct Arr
{
    int * pBase;//存储的是数组第一个元素的地址
    int len;//数组所能容纳的最大元素的个数
    int cnt;//当前数组有效元素的个数
};

bool append_arr(struct Arr * pArr,int val);//添加一个元素到数组末尾
bool insert_arr(struct Arr * pArr,int pos,int val);//插入一个元素到数组中   pos的值从1开始，例如pos=2,第二个元素
bool delete_arr(struct Arr * pArr,int pos,int * pVal);
bool is_empty(struct Arr * pArr);
bool is_full(struct Arr * pArr);
void init_arr(struct Arr * pArr,int length);
void sort_arr(struct Arr * pArr); //本案例用冒泡排序，从小到大，第一个分别于第23456比较，把小的放前面
void show_arr(struct Arr * pArr);
void inversion_arr(struct Arr * pArr);
void init_arr();//初始化数组

int main(){
    struct Arr arr;//此时已经分配内存空间，但没有初始化，内存空间中是垃圾数字
    int val;
    init_arr(&arr,6);
    show_arr(&arr);
    append_arr(&arr,1);
    append_arr(&arr,2);
    append_arr(&arr,3);
    append_arr(&arr,4);
    append_arr(&arr,5);
    insert_arr(&arr,1,99);//在第一个位置插入99,
    if(delete_arr(&arr,7,&val))//删除第七个元素，报错，因为一共就六个元素
    {
        printf("delete succeed!\n");
        printf("delete element is %d\n",val);
    }
    else
    {
        printf("delete error!\n");
    }
    // append_arr(&arr,6);
    // if(append_arr(&arr,7))
    // {
    //     printf("succeed!\n");
    // }
    // else
    // {
    //     printf("error!\n");
    // }
    
    show_arr(&arr);
    
    printf("\ninversion after is:\n");
    inversion_arr(&arr);
    show_arr(&arr);
    
    printf("\nsmall to big:\n");
    sort_arr(&arr);
    show_arr(&arr);
    return 0;
}

void init_arr(struct Arr * pArr,int length){
    pArr->pBase=(int *)malloc(sizeof(int)*length);    
    if(NULL==pArr->pBase){
        printf("error\n");
        exit(-1);//终止整个程序
    }
    else{
        pArr->len=length;
        pArr->cnt=0;
    }
    return ;//返回空，告诉别人函数已经终止了
}

void show_arr(struct Arr * pArr)
{
    if(is_empty(pArr))
    {
        printf("array is empty!\n");
    }
    else
    {
        for (int i=0;i<pArr->len;i++)
        {
            printf("%d",pArr->pBase[i]);
        }
        
    }
     
}

bool is_empty(struct Arr * pArr)
{
    if(0 == pArr->cnt) 
        return true;
    else
        return false;
}

bool is_full(struct Arr * pArr)
{
    if(pArr->cnt==pArr->len)
        return true;
    else
        return false;
}

bool append_arr(struct Arr * pArr,int val)
{
    //满时返回false
    if(is_full(pArr))
        return false;
    
    //不满时追加
    pArr->pBase[pArr->cnt] = val;
    (pArr->cnt)++;

    return true;
}

bool insert_arr(struct Arr * pArr,int pos,int val)
{
    int i;
    if (is_full(pArr))
    {
        return false;
    }
    
    if(pos<1||pos>pArr->cnt+1)
        return false;

    for (i = pArr->cnt-1; i >= pos-1; i--)
    {
        pArr->pBase[i+1]=pArr->pBase[i];
    }
    pArr->pBase[pos-1]=val;
    pArr->cnt++;    
    return true;
}

bool delete_arr(struct Arr * pArr,int pos,int * pVal)
{
    if(is_empty(pArr))
        return false;
    if(pos<1||pos>pArr->cnt)
        return false;

    *pVal = pArr->pBase[pos-1];
    for (int i = pos; i <pArr->cnt; i++)
    {
        pArr->pBase[i-1]=pArr->pBase[i];
    }
    pArr->cnt-1;
    return true;    
}

void inversion_arr(struct Arr * pArr)
{
    int i=0;
    int j=pArr->cnt-1;
    int t;
    while (i<j)
    {
        t=pArr->pBase[i];
        pArr->pBase[i]=pArr->pBase[j];
        pArr->pBase[j]=t;
        --j;
        ++i;
    }
    
}
void sort_arr(struct Arr * pArr)
{
    int i,j,t;
    for ( i = 0; i < pArr->cnt; i++)
    {
        for ( j = i+1; j < pArr->cnt; j++)
        {
            if(pArr->pBase[i]>pArr->pBase[j])
                {
                    t=pArr->pBase[i];
                    pArr->pBase[i]=pArr->pBase[j];
                    pArr->pBase[j]=t;
                }
        }
        
    }
    
}



