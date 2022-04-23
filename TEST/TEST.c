#include <stdio.h>
int main()
{
    const char x[]="hello";
    
    const char* const p=x;
    
    for (int i = 0; i < 6; i++)
    {
        printf("%c",*(p+i));
    }
    

    // int a=5,b=2;
    // float j;
    // // b+=(float)(a+b)/2;

    // //j=(float)(a+b)/2;
    // // printf("%x",b);
    // char* p="helloooo";
    // char  q[]="hello";

    // int c[]={1,2,3};
    
    // for (int i = 0; i <3; i++)
    // {
    //     printf("%d",*(c+i));
    // }
    
    // for (int i = 0;i<9; i++)
    // {
    //     printf("%c\n",*(p+i));
    // }
    //  for (int j = 0; j < 6; j++)
    // {
    //     printf("%c\n",*(q+j));
    // }    
   
    return (0);
}  