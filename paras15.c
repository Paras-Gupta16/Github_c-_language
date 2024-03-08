// how to delete any specific postion in array
// under static memory allocation
#include<stdio.h>
int main()
{
    int arr[500];
    int i,j,k;
    int pos;
    printf("enter the size of the array ..not more than 500");
    scanf("%d",&k);
    // for input the element into our array
    for(i=0;i<k;i++)
    {
        printf("enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // now print the element of array
    for(i=0;i<k;i++){
        printf("%d\t",arr[i]);
    }
    // how to delete any postion
    printf("\nenter the postion to delete:");
    scanf("%d",&pos);
    // now shift this element to the left
    for(j=pos-1;j<k;j++)
    {
        arr[j]=arr[j+1];
    }
    // after delete resize the array
    k--;
    // now print the array after delete the particular postion
    for(i=0;i<k;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}