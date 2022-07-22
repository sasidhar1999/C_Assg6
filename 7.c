// 7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int i,n,c=0,x;
    printf("Enter a number : ");
    scanf("%d",&n);
    x=n;
    while(n)
    {
        n=n/10;
        c++;
    }
    printf("No of digits in %d is %d",x,c);
    return 0;
}