#include<stdio.h>
int main(){     //比较字符串s1，s2.若s1>s2,输出正值；若s1<s2,输出负值；s1=s2，输出0；输出的正负值是两个字符串相应的差值；列A<C,输出-2；And>Aid,输出5
    int i=0 ,result;
	char s1[100],s2[100];
    printf("Please enter the first char:\n");
    gets(s1);
    printf("Please enter the second char:\n");
	gets(s2);
    while((s1[i]==s2[i])&&(s1[i]!='\0'))
  {
    i++; //逐个比较
  }
  if(s1[i]=='\0'&&s2[i]=='\0')
  {
    result=0;
  }
  else
  {
    result=s1[i]-s2[i]; //按照ASCII码表输出差值
  }
  printf("result:%d\n",result);
  return 0;

}