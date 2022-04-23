//断言的使用
/* 
    函数名：assert
    功能：测试一个条件并可能使程序终止
    用法：void assert(int test);


*/

//#define NDEBUG //关闭断言
//#undef NDEBUG   //打开断言
#include<assert.h>
#include<stdio.h>

#define NDEBUG

int main( void )
{
    FILE *fp;
    fp = fopen( "C:\\VsCode\\File\\test11.txt", "w" );//以可写的方式打开一个文件，如果不存在就创建一个同名文件
    assert( fp );              //所以这里不会出错
    fclose( fp );
   
    fp = fopen( "C:\\VsCode\\File\\test11.txt", "r" );//以只读的方式打开一个文件，如果不存在就打开文件失败
    assert( fp );              //所以这里出错
    fclose( fp );              //程序永远都执行不到这里来
    return 0;
}