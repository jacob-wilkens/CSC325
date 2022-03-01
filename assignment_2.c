#include <stdio.h>
#define SIZE 5

void printArr(int myArray[])
{
    for (int i = 0; i < SIZE; i++ ) {
      printf(" %d ", myArray[i]);
   }
}

void swap(int arr[], int index)
{
    int temp;
    temp = arr[index];
    arr[index] = arr[index + 1];
    arr[index + 1] = temp;
}

void sort (int arr[])
{
    int i, j;
    for (i = 0; i < SIZE; i += 1) {
        for (j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j -= 1) {
            swap(arr, j); 
        }
    } 
}

int main()
{
    //Swapping
    int myArray[] = {1, 2, 3, 4, 5};
     printf("Starting array\n");
    printArr(myArray);
    printf("\n____________________________\n\n");
    swap(myArray, 2);
    printf("After swap\n");
    printArr(myArray);
    printf("\n");
    //Swapping
    int myArray2[] = {7, 3, 6, 5, 4};
    printf("\nStarting array\n");
    printArr(myArray2);
    printf("\n____________________________\n\n");
    sort(myArray2);
    printf("After sorting\n");
    printArr(myArray2);
    return 0;
}
