#include <stdio.h>
#include <string.h>

 
int main()
{
    char str1[30] = {"People's Republic of "};
    char str2[] = {"China"};
//printf("%ld, %ld, %ld\n", str1, str2, strcat(str1, str2));

    printf("%s\n%s\n%s\n", str1, str2, strcat(str1, str2));

    //printf("%s\n",str1);
    //printf("%s\n",str2);
   // printf("%s\n",strcat(str1,str2));
    


    return 0;
}