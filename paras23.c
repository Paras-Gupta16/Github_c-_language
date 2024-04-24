// queue program through array
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int queue[SIZE];
int front=-1,rear=-1;
void enqueue()
{
    if(rear-1==SIZE)
    {
        printf("Queue is full:ERROR-OVERFLOW");
        return ;
    }
    else{
        if(front==-1)
        {
            front=0;
        }
        int item ;
        printf("enter the element:");
        scanf("%d",&item);
        rear+=1;
        queue[rear]=item;
        printf("%d inserted into queue\n",item);
    }
}
void dequeue()
{
    if(front==-1&& rear==-1)
    {
        printf("ERROR:UNDERFLOW\n");
    }
    else if(front==rear)
    {
        printf("Last element deleted\n");
        front=-1;
        rear=-1;
    }
    else{
        printf("element deleted\n");
        front=front+1;
    }
}
void display() {
    if(front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("press 1 for enqueue\npress 2 for dequeue\npress 3 for display\npress 4 for exit\n");
        printf("enter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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