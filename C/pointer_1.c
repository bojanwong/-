/***************************************************
编写一个程序，输入月份号，输出该月份号的英文名称。
例如输入 8，则输出 “August”，要求用指针数组处理。
***************************************************/

#include<stdio.h>
int main()
{
    char *a[12]={"january","february","march","april","may","june","july","august","september","october","november","december"};
    int number;
    printf("please enter a number(1~12):");
    scanf("%d",&number);
    printf("%s\n",*(a+number-1));
    return 0;
}
