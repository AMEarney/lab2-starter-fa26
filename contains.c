<<<<<<< HEAD
#include <stdio.h> 

int contains(int item, int arr[], int size) {
   // Write your solution here!
	for (int i = 0; i < size; i++) 
	{
		if (item == arr[i])
			return 1;
	}
	return 0;
   // Return 1 if "item" exists in "arr" (which has length "size"), otherwise 0
=======
#include <stdio.h>

int contains(int item, int arr[], int size) {
   for (int i = 0; i < size; i++) {
      if (arr[i] == item) {
         return 1;
      }
   }
   return 0;
>>>>>>> 044b1f66dc6b312c33e1361adf504a929bf4c6fb
}

int main() {
   int arr[] = {2, 9, 2, 0, 2, 5};

<<<<<<< HEAD
   // Call "contains" with an item of your choice, "arr", and the length of "arr".
   int result = contains(1, arr, 6);
   // Replace "0" in the following line with your function call
   printf("Result: %d\n", result);
   result = contains(5, arr, 6);
   printf("Result: %d\n", result);
=======
   printf("Result: %d\n", contains(2, arr, 6));
   printf("Result: %d\n", contains(9, arr, 6));
   printf("Result: %d\n", contains(7, arr, 6));
   return 0;
>>>>>>> 044b1f66dc6b312c33e1361adf504a929bf4c6fb
}
