//  stack program through array
#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top=-1;
void push()
{   int item;
    printf("enter the element:");
    scanf("%d",&item);
    if(top==size-1)
    {
        printf("overflow");
    }
    else{
        top+=1;
        stack[top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else{
        printf("Deleted element=%d",stack[top]);
        top=top-1;
    }
}
int main()
{
    printf("press 1 for push\npress 2 for pop\npress 3 for exit\n");
    int choice;
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
           push();
           break;
        case 2:
          pop();
          break;
        case 3:
           exit(0);
           break;
        default:
           printf("enter vaild choice:\n");
    }
}
