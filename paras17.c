// program to merge two arrays under statics memory allocation
#include<stdio.h>
int main()
{
    int arr[500],att[500],merge[1000];// declaration of arrays
    int i,j,k,l;
    // take the input for the 1st array
    printf("enter the size of 1st array:");
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        printf("enter the element%d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n element you enter in the 1st array:\n");
    for(i=0;i<j;i++)
    {
        printf("%d\t",arr[i]);
    }
    // take the input for the 2nd arrays
    printf("\n");
    printf("enter the size of the 2nd array:");
    scanf("%d",&l);
    for(k=0;k<l;k++)
    {
        printf("enter the element%d:",k+1);
        scanf("%d",&att[k]);
    }
    printf("\nelement you enter in the 2nd array:\n");
    for(k=0;k<l;k++)
    {
        printf("%d\t",att[k]);
    }
    printf("\n");
    // now merge the array
    for(i=0;i<j;i++)
    {
        merge[i]=arr[i];
    }
    for(k=0;k<l;k++)
    {
        merge[j+k]=att[k];
    }
    for(i=0;i<j+l;i++)
    {
        printf("%d\t",merge[i]);
    }
}