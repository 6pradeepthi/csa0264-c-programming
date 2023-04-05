
#include <stdio.h>

int main() {
   int arr[100], n, largest1, largest2, i;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array:\n");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   largest1 = arr[0];
   largest2 = arr[1];

   for (i = 1; i < n; i++) {
      if (arr[i] > largest1) {
         largest2 = largest1;
         largest1 = arr[i];
      } else if (arr[i] > largest2 && arr[i] != largest1) {
         largest2 = arr[i];
      }
   }

   printf("The largest two elements in the array are: %d and %d\n", largest1, largest2);

   return 0;
}
