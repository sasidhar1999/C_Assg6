// 1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    printf("Sum is %d",s);
    return 0;
}