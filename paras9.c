// program to swap to numbers:
#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nnumber before swapping=%d\t%d\n",a,b);
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("number after swapping=%d\t%d",x,y);
}