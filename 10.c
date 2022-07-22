// 10. Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int i,n,r,rev=0,x;
    printf("Enter a number : ");
    scanf("%d",&n);
    x=n;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse of %d is %d",x,rev);
    return 0;
}