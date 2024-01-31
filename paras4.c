// calulator in c using switch case
#include<stdio.h>
int main()
{
    int num_1,num_2;
    int sum,diff,multi,divi;
    printf("enter two number:");
    scanf("%d%d",&num_1,num_2);
    printf("select the operation you want to perform:\n");
    printf("press 1 for sum\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    int choice;
    switch (choice)
    {
    case 1:
         sum=num_1+num_2;
        printf("sum=%d",sum);
        break;
    case 2:
     diff =num_1+num_2;
    printf("Subtraction =%d",diff);
    break;
    case 3:
     multi=num_1*num_2;
    printf("multiplication=%d",multi);
    case 4:
     divi=num_1/num_2;
    printf("division =%d",divi);    
    default:
    printf("enter a valid choice");
        break;
    }
}