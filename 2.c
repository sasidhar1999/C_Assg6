// 2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s += 2*i;
    }
    printf("Sum of first n even natural numbers is %d",s);
    return 0;
}