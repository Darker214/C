#include <stdio.h>
struct student
{char num[10];
 char name[8];
 int score[3];
 float ave;
 }  stu[5];

int main()
 { int i,j,sum;
   FILE *fp;
   for(i=0;i<5;i++)
   {printf("please enter the information of the %d student:\n",i+1);
   printf("NO.:");
   scanf("%s",stu[i].num);//对num而言，而不是stu,不加“&”是因为结构体当中的num和name为字符数组，字符数组名已经是地址。
   printf("name:");
   scanf("%s",stu[i].name);//不加“&”是因为结构体当中的num和name为字符数组，字符数组名已经是地址。
   sum=0;
   for (j=0;j<3;j++)
     {printf("score %d:",j+1);
      scanf("%d",&stu[i].score[j]);//&是对score而言的，而不是stu,score虽然也是个整型数组，我们让用户输入的这个整型数组的每一项，对于每一项而言，相当于普通的变量
      sum+=stu[i].score[j];
   }
   stu[i].ave=sum/3.0;
   }

  fp=fopen("C:\\VsCodeFile\\C\\demo3.txt","w");
  for (i=0;i<5;i++)
     if (fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
 printf("file write error\n");
  fclose(fp);

  fp=fopen("stud","r");
  for (i=0;i<5;i++)
    {fread(&stu[i],sizeof(struct student),1,fp);
     printf("\nNO.=%s,name=%s,score1=%d,score2=%d,score3=%d,average=%6.2f\n",stu[i].num,stu[i].name,stu[i].score[0],
    stu[i].score[1],stu[i].score[2],stu[i].ave);}
  return 0;
  }