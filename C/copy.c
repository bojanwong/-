/**********************************************************
实现一个 C 语言程序:可以支持复制功能。

例如程序编译后执行:复制一份/etc/protocols 文件到 /tmp 目录：
**********************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    char ch;
    if((fp1=fopen(argv[1],"r"))==NULL)
    {
        printf("error\n");
        exit(0);
    }
    if((fp2=fopen(argv[2],"r"))!=NULL)
    {
        printf("error\n");
        exit(0);
    }

    ch=fgetc(fp1);
    fp2=fopen(argv[2],"w");
    while(ch!=EOF)
    {
        fputc(ch,fp2);
        ch=fgetc(fp1);
    }

    fclose(fp1);
    fclose(fp2);
    printf("copy successed!\n");
    return 0;
}

/******************************************
ps:两个if语句的条件可以合并(略)

进行复制的那一段也可以简单写成：

while((ch = fgetc(fp1)) != EOF)
{ 
    fputc(ch, fp2);
}
******************************************/
