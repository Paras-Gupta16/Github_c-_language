// stack program through linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*top=NULL;
void push()
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&temp->data);
    temp->link=top;
    top=temp;
    printf("%d pushed into the stack",temp->data);
    printf("\n");
}
void pop()
{
    struct node *temp=top;
    if(top==NULL)
    {
        printf("ERROR:UNDERFLOW\n");
        return ;
    }
    printf("element deleted=%d",temp->data);
    top=top->link;
    free(temp);
}
int main() {
    int choice;

    while (1) {
        printf("\nPress 1 for push\nPress 2 for pop\nPress 3 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                printf("Enter a valid choice.\n");
        }
    }
}