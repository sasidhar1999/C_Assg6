// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int x1,x2,m;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&x1,&x2);
    m = x1>x2 ? x1 : x2;
    while(1)
    {
        if(m%x1==0 && m%x2==0)
        {
            printf("LCM of %d and %d is %d",x1,x2,m);
            break;
        }
        m++;
    }
    return 0;
}