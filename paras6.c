// factorial program 
#include<stdio.h>
int main()
{
    int num;
    int fact=1;
    int i;
    
    printf("enter the number ehic you want to calulate the factorial:");
    scanf("%d",&num);
    if(num==0){
        printf("factorial=1");
    }
    else{
        for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }
    }
    printf("Factorail of give number=%d",fact);
    return 0;
}