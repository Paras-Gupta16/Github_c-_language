//Program to delete any specific position in an array 
// under dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
// this header file use to allocated dynamic memory
int main()
{
    int *arr;// dynamic memory allocated to the pointer only
    int i,j,k;
    int pos;
    printf("enter the number of element you want to enter:");
    scanf("%d",&k);
    arr=(int*)malloc(k*sizeof(int));// malloc function is used to allocted the memory 
    for(i=0;i<k;i++)
    {
        printf("enter the element%d:",i+1);
        scanf("%d",&arr[i]);
    }
    // print the element you enter 
    for(i=0;i<k;i++)
    {
        printf("%d\t",arr[i]);
    }
    // enter the postion to delete
    printf("\nenter the postion to delete:");
    scanf("%d",&pos);
    for(j=pos-1;j<k;j++)
    {
        arr[j]=arr[j+1];
    }
    // print the array after delete the element
    k--;
    // after this rellocated the memory to arr to fit the remaining element
    arr=(int*)realloc(arr,k*sizeof(int));
    for(i=0;i<k;i++)
    {
        printf("%d\t",arr[i]);
    }
    free(arr);// to free the allocated memory
    return 0;
}