// program to return multiple value from the function at a time
#include<stdio.h>
void multi(int ,float*,float*);
int main()
{
    int radius;
    float area,perimeter;
    printf("enter radius of circle:");
    scanf("%d",&radius);
    multi(radius,&area,&perimeter);
    printf("Area=%f\t",area);
    printf("Perimeter=%f\t",perimeter);
    return 0;
}
void multi(int r, float*a,float*b)
{
    *a=3.14*r*r;
    *p=2*3.14*r;
}