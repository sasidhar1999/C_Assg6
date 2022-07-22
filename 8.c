// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int i,n,a,b=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    a=n/2;
    for(i=2;i<=a;i++)
    {
        if(n%i==0)
        {
            printf("%d is not a prime number",n);
            b=1;
            break;
        }
    }
    if(b==0)
        printf("%d is a prime number",n);
    return 0;
}