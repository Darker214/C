#include<stdio.h>
#include<string>
int main(){
	FILE *fp;
    char str[102] = {0}, strTemp[100];
	    if( (fp=fopen("C:\\VsCodeFile\\C\\demo.txt", "at+")) == NULL ){
        puts("Fail to open file!");
        exit(0);
    }
    printf("Input a string:");
	    gets(strTemp);
	    strcat(str, "\n");
    strcat(str, strTemp);
	    fputs(str, fp);
	    fclose(fp);
	    return 0;
	}
