// how to take input in an array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k;
    printf("enter the size of the array");
    scanf("%d",&j);
    k=(int*)malloc(j*sizeof(int));
    int arr[k];
    for(i=0;i<k;i++)
    {
        printf("enter the element %d",i+1);
        scanf("%d",&arr[i]);
    }
    // print the array
    for(i=0;i<k;i++)
    {
        printf("%d\t",arr[i]);
    }
}