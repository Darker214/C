#include<stdio.h>


int max(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
        
        
    }
    else if (b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
    
    
    

}

int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=max(a,b,c);
    printf("%d",d);

    return 0;
}

