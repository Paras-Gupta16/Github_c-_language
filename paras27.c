// program to calculate the digonal difference of matrix
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100][100];
    int s,i,j,k;
    printf("enter the size of the matrix:");
    scanf("%d",&s);
    printf("\n");
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            printf("enter the element arr[%d][%d]:",i+1,j+1);
            scanf("%d",&arr[i][j]);

        }
    }
    printf("\n");
    // element you enter
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // the difference of diagonal 
    // for the left digonal
    int sum_left=0;
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            if(i==j){
                sum_left+=arr[i][j];
            }
        }
    }
    // for the right part of the matrix
int sum_right = 0;
for(i = 0; i < s; i++) {
    sum_right += arr[i][s - 1 - i];
}

    // for the difference part
    int sum_difference;
    sum_difference=sum_left-sum_right;
    // for checking if sum is less ,than *(-1)
    if (sum_difference<0){
        sum_difference*=-1;
        printf("%d",sum_difference);
    }
    else{
        printf("%d",sum_difference);
    }
    return 0;
}