
#include <stdio.h>

int main() {
    int arr[100], size, i, largest, second_largest, smallest, second_smallest;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // initialize largest, second_largest, smallest, and second_smallest
    largest = arr[0];
    second_largest = arr[1];
    if (second_largest > largest) {
        int temp = largest;
        largest = second_largest;
        second_largest = temp;
    }

    smallest = arr[0];
    second_smallest = arr[1];
    if (second_smallest < smallest) {
        int temp = smallest;
        smallest = second_smallest;
        second_smallest = temp;
    }

    for (i = 2; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest) {
            second_largest = arr[i];
        }

        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest) {
            second_smallest = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", second_largest);
    printf("The second smallest element in the array is: %d\n", second_smallest);

    return 0;
}
