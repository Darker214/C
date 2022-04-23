#include<stdio.h>


int main()
{
    int s,score;
    printf("enter a score:\n");
    scanf("%d",&score);
    s=score/10;
    switch (s)
    {
    case 10:printf("A") ;break;
    case 9:printf("A") ;break;
    case 8:printf("B") ;break;
    case 7:printf("C") ;break;
    case 6:printf("D") ;break;
    case 5:printf("E") ;break;
    case 4:printf("E") ;break;
    case 3:printf("E") ;break;
    case 2:printf("E") ;break;
    case 1:printf("E") ;break;
    default:printf("ERROR");
        break;
    }



    return 0;
}