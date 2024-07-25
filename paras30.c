#include<stdio.h>
#include<stdlib.h>

int main() {
    // master array
    int *arr;
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);  // Initialize n with the user input
    arr = (int*)malloc(sizeof(int) * n);
    printf("\n");

    // take input from user
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int y = 0;
    int length = n;
    int choice;

    // print the menu
    printf("\n1. If you want to partition");
    printf("\n2. For exit from the program\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int dis;
                printf("Enter the number of partitions: ");
                scanf("%d", &dis);

                if (dis > length - y) {
                    printf("You entered a number larger than the remaining elements in the array\n");
                } else {
                    printf("Partition: ");
                    for (int i = 0; i < y + dis; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                    y += dis;
                }
                break;
            }

            case 2: {
                printf("If you want to exit, enter the number of elements you entered * 2: ");
                int q;
                scanf("%d", &q);
                if (q == n * 2) {
                    free(arr); 
                    exit(0);
                } else {
                    printf("Wrong number entered. Try again.\n");
                }
                break;
            }

            default:
                printf("You entered a wrong choice. Try again.\n");
                break;
        }
    }

    return 0;
}
