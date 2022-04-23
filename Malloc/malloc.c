//动态分配内存

#include<stdio.h>
#include<malloc.h>
int main(){
    int a[5]={5,9,32,75,3};
    int len;
    printf("please enter one array length:len=");
    scanf("%d",&len);
    int * pArr =(int *)malloc(sizeof(int)*len);
    // *pArr=5;  //类似于a[0]=5
    // pArr[1]=9; //类似于a[1]=9
    // printf("%d  %d\n",*pArr,pArr[1]);
    // free(pArr);//把pArr所代表的动态分配的20个字节的内存释放


    //用for循环实现输入输出
    for (int i = 0; i < len; i++)
    {
        scanf("%d",pArr+i);
    }
    for (int  j= 0; j < len; j++)
    {
        printf("%d",pArr[j]);
    }
    
    free(pArr);   

    return 0;
}