//  快速排序
/*  先把第一个元素的值赋给val（称为分界值）  ，设第一个元素是a[low],最后一个元素是a[high]
    然后把val和a[high]比较，      如果val小，下标就往前移一个high--
                                 如果val大，就把这个元素赋给a[low]，此时跳转到a[low]
     
     
      把val和a[low]比较，如果val大，下标就往后移一个low++
                       如果val小，就把该下标对应的值赋给a[high]，此时跳转到a[high]
    
    
    重复上述操作，知道low和high相等


    此时出现一个分界值a[low]=a[high]=val，该分界值将数组分成左右两部分

    将大于或等于分界值的数据放到数组右边
    将小于或等于分界值的数据放到数组左边

    此时，左边的数都小于分界值，右边的数都大于分界值

    然后，左边和右边的数据可以独立排序，对于左侧数据，又可以取一个分界值，将左侧数据再次分成左右将部分，右侧同理

    重复上述过程，可以看出这是一个递归定义

*/
#include<stdio.h>

int FindPos(int *a,int low,int high);
void QuickSort(int * a,int low ,int high);

int main()
{
    int a[]={2,1,0,5,4,3};
    int i;
    QuickSort(a,0,5);//第二个参数表示第一个元素的下标  ，第二个参数表示最后一个元素的下标
    for(i;i<6;i++)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}

void QuickSort(int * a,int low ,int high)
{
    int pos;
    if(low<high)
        {
            pos=FindPos(a,low,high);
            QuickSort(a,low,pos-1);
            QuickSort(a,pos+1,high);
        }
}


int FindPos(int *a,int low,int high)
{
    int val =a[low];
    while (low<high)
    {
       while (low<high&&a[high]>=val)
        high--;
    a[low]=a[high];

    while (low<high&&a[low]<=val)
        low++;
    a[high]=a[low];
    } //while终止循环之后，low和while一定相等
    
    a[low]=val;
    return low; //low可以改为high,但不能改为val,也不能改为a[low],也不能改为a[high]

}



