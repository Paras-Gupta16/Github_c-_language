//merge sort
#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[50], arr1[50];
    int i, j, k;
    int n1, n2;
    
    // Input part
    printf("Enter the size of the first array (max 50):\n");
    scanf("%d", &n1);
    if (n1 > 50) {
        printf("Size exceeds the maximum limit of 50.\n");
        return 1;
    }
    for(int q = 0; q < n1; q++) {
        printf("Enter element %d: ", q + 1);
        scanf("%d", &arr[q]);
    }
    
    printf("Enter the size of the second array (max 50):\n");
    scanf("%d", &n2);
    if (n2 > 50) {
        printf("Size exceeds the maximum limit of 50.\n");
        return 1;
    }
    for(int w = 0; w < n2; w++) {
        printf("Enter element %d: ", w + 1);
        scanf("%d", &arr1[w]);
    }
    
    i = 0;
    j = 0;
    k = 0;
    int arr2[n1 + n2];
    
    // Merging part
    while(i < n1 && j < n2) {
        if(arr[i] <= arr1[j]) {
            arr2[k] = arr[i];
            i++;
        } else {
            arr2[k] = arr1[j];
            j++;
        }
        k++;
    }
    
    // Copy remaining elements
    while(i < n1) {
        arr2[k] = arr[i];
        k++;
        i++;
    }
    while(j < n2) {
        arr2[k] = arr1[j];
        k++;
        j++;
    }
    
    // Print the sorted array
    printf("Merged sorted array:\n");
    for(int e = 0; e < n1 + n2; e++) {
        printf("%d\t", arr2[e]);
    }
    printf("\n");
    
    return 0;
}