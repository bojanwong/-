/**************************************************
实现一个 C 语言程序:
可以读入若干个整数，然后计算出读入的整数的和并输出。
注意:
输入的序列数字要做为编译后的可执行文件的参数传入,
不是 scanf 读取.
**************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    int position,sum=0;
    if(argc<2)
	return 1;
    else
{
    for(position=1;position<argc;position++)
	sum+=atoi(argv[position]);
}
printf("sum=%d\n",sum);
return 0;
}
