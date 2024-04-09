// program to merge two arrays under dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr, *att, *merge;
    int i, j, k, l;

    printf("Enter the size for the 1st array: ");
    scanf("%d", &j);
    arr = (int*)malloc(j * sizeof(int));

    for (i = 0; i < j; i++) {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the size for the second array: ");
    scanf("%d", &l);
    att = (int*)malloc(l * sizeof(int));

    for (k = 0; k < l; k++) {
        printf("Enter the element %d: ", k + 1);
        scanf("%d", &att[k]);
    }

    // Merge the arrays
    merge = (int*)malloc((j + l) * sizeof(int));
    for (i = 0; i < j; i++) {
        merge[i] = arr[i];
    }

    // Now reallocate the memory
    merge = (int*)realloc(merge, (j + l) * sizeof(int));
    for (k = 0; k < l; k++) {
        merge[j + k] = att[k];
    }

    printf("\nMerged array: ");
    for (i = 0; i < j + l; i++) {
        printf("%d ", merge[i]);
    }
    
    // Free the allocated memory
    free(arr);
    free(att);
    free(merge);
    
    return 0;
}
