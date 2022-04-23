//a[i]等价于  i[a]

#include<stdio.h>
int main(){
   int a[]={0,1,2,3,4};
    
    for (int i = 0; i < 5; i++)
    {
       printf("%d\n",i[a]);//i[a]=a[i]
    }
    for (int i = 4; i >= 0; i--)
    {
       printf("%d\n",a[i]);//i[a]=a[i]
    }
    
    return 0;
}