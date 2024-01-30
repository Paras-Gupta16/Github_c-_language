// program to check the number whether it's even or odd:
#include<stdio.h>
int main()
{
    printf("enter the number:\n");
    int num;
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
    return 0;
}