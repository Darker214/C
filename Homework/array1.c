#include<stdio.h>

//删除数组指定位置的元素
int main()
{
    int a[5]={5,3,99,4,7};
    int b[4];//用来存放删除数字后的数组
    int index;//要删除的值的下标
    printf("index =:");
    scanf("%d",&index);
    for (int i = 0; i < 5; i++)
    {
        if(i<index)
        {
            b[i]=a[i];
        }
        else
        {
            b[i]=a[i+1];
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d ",*(b+i));
    }
    
    


    return 0;
}