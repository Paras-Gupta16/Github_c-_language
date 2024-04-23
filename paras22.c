// stack program through linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *top=NULL;
void push()
{
    struct node *temp;
    int item;
    printf("enter item to be inserted:");
    scanf("%d",&item);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->link=top;
    top=temp;
    printf("%d inseted into stack:\n",item);
}
void pop()
{   struct node *temp=top;
    if(temp==NULL)
    {
        printf("ERROR:UNDERFLOW\n");
        return ;
    }
    else{
        printf("element deleted=%d",temp->data);
        top=top->link;
        free(temp);
    }
}
void display()
{
    struct node *temp=top;
    if(temp==NULL)
    {
        printf("there is no element in the stack:\n");
        return ;
    }
    else{
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
    printf("\n");
}
int main()
{
    int choice;
    while(1)
    {
        printf("press 1 for push\npress 2 for pop\npress 3 for display\npress 4 for exit\n");
        printf("enter choice:");
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
                display();
                break;
            case 4:
                exit(0);
                break;
            default :
                printf("enter the vaild choice\n");
                break;
        }
    }
    return 0;
}