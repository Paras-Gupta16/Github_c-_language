// claulate the area of traingle and circle using function and switch case
#include<stdio.h>
int triangle(int ,int);
int circle(int);
int main()
{ int base,height,radius;
    int choice;
    printf("press 1 for calculate the area of triangle:\n");
    printf("press 2 for calculate the area of circle:\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("enter the height and base of the triangle:\n");
        scanf("%d%d",&height,&base);
        triangle(base,height);
        printf("Area of triangle=%d",triangle);
        break;
    case 2:
        printf("enter the radius:");
        scanf("%d",&radius);
        circle(radius);
        printf("Area of circle=%d",circle);    
    default:
        printf("enter a vaild choice");
        break;
    }
    return 0;
}
int triangle(int x,int y)
{
    int area;
    area=0.5*(x*y);
    return area;
}
int circle(int z)
{
    int area_1;
    area_1=3.14*z*z;
    return area_1;
}