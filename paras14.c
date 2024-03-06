// bubble sort in array
#include<stdio.h>
int main()
{
    int arr[100];
    int i,j,k;
    int size;
    printf("enter the size od the array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    //print the array you enter
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    // now for sorting
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                // here temp variable is k
                k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }
    // now print the sort array
    for(i=0;i<size;i++)
    {
        printf("\n%d\t",arr[i]);
    }
    
}