#include<stdio.h>

int main()
{
    char c1,c2;
    c1='A';
    c2='B';
    printf("use putchar result is:");
    putchar(c1);    //输出A
    putchar(c2);    //输出B
    printf("\n");
    printf("use printf  result is:");
    printf("%d and %d",c1,c2);  //输出65 and 66
    
    return 0;
}