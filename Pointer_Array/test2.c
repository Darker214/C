//如何通过被调函数修改主函数中一维数组的内容

#include<stdio.h>
int main(){
    void array(int * p,int len);
    int a[5]={1,2,3,4,5};
    array(a,5);//a等价于&a[0],&a[0]本身就是int *类型


    return 0;
}

void array(int * p,int len){

    *p=9;
    for(int i=0;i<len;i++)
        printf("%d",p[i]); //p[i]=*(p+i)=*(a+i)=a[i]
                    //p[i]就是主函数的a[i]
}