// how to implement linked list in c
#include<stdio.h>
#include<stdlib.h>// header file which is used to provide dynamic memory
struct node
{
    /* data */
    int data;
    struct node *link;
};
struct node *root=NULL;
// function to add the values in the linked list
void append()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));// provide memory for our data
    printf("enter data:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else{
        struct node *p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
// function to display the element in the linked list
void display()
{
    struct node *p;
    p=root;
    if(p==NULL)
    {
        printf("there is no element in the linked list:\n");
    }
    else{
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->link;
    }
    }
    printf("\n");
}
// program to calculate the length of the linked list
void length()
{
    struct node *p;
    p=root;
    int c=0;
    if(p==NULL)
    {
        printf("length=%d\n",c);
    }
    else{
        while(p!=NULL)
        {
            c++;
            p=p->link;
        }
        printf("length=%d",c);
    }
    printf("\n");
}
int main()
{   
    int choice;
    printf("press 1 for add element in the linked list:\npress 2 for display\npress 3 for calculate the length\npress 4 for exit the linked list\n");
    while(1)
    {
        printf("enter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            append();
            break;
        case 2:
            display();
            break;
        case 3:
            length();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("enter the vaild choice:\n");
            break;
        }
    }
    return 0;
}