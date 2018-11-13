/************************************************************************
输入一组整数，求出这组数字子序列和中的最大值。
只要求出最大子序列的和，不必求出最大值对应的序列。

最大子序列和：
整数序列A1， A2，... An （可能有负数）
求A1~An的一个子序列Ai~Aj，使得Ai到Aj的和最大。

例如：
序列：-2, 11, -4, 13, -5, 2, -5, -3, 12, -9，则最大子序列和为21。
序列：0, -3, 6, 8, -20, 21, 8, -9, 10, -1, 3, 6, 5，则最大子序列和为43。
************************************************************************/

include<stdio.h>

int i,N,max,min,a[1000];
int main()
{
    printf("How many numbers do u want to enter:");
    scanf("%d",&N);
    printf("Please enter number:");
    for(i=1;i<=N;i++)
        scanf("%d",&a[i]);
    
max=a[1],min=0;
    for(i=1;i<=N;i++)
    {
        a[i]+=a[i-1];
        if(a[i]-min>max)
            max=a[i]-min;
        if(a[i]<min)
            min=a[i];
    }
    printf("The 'subsequence sum' max is: %d\n",max);
    return 0;
}
