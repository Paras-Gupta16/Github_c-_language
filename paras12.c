// calculating factorial using Recursion
#include<stdio.h>
int rec(int);
int main()
{
    int a,fact;
    printf("enter the number:");
    scanf("%d",&a);
    fact=rec(a);
    printf("factorail=%d",fact);
    return 0;
}
int rec(int x)
{
    int y;
    if(x==1)
    {
        return 1;
    }
    else{
        y=x*rec(x-1);
    }
    return y;
}