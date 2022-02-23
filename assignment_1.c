#include <stdio.h>
#define SIZE 5

/* function to duplicate array */
int * copy1(int arr[]) {
    //Array Declaration
    static int duplicate[SIZE];
    //Copy values
    for(int i = 0; i < SIZE; i++) {
        duplicate[i] = arr[i];
    }
    //Return array
    return duplicate;
}

/* function to duplicate array */
int * copy2(int arr[]) {
    //Variable declaration
    int* p = NULL;
    static int duplicate[SIZE];
    int i = 0;
    
    //Reading the values using pointers
    for(p = arr; p < arr + SIZE; ++p) 
    {
        duplicate[i] = *p;
        i++;
    }
    //Return array
    return duplicate;
}

int main()
{
    //Starting Array
    int myArray[] = {4, 1, 2, 3, 5};
    //Array from Copy1
    int* myArray2;
    myArray2 = copy1(myArray);
    
    for (int i = 0; i < SIZE; i++ ) {
      printf("val is %d \n", myArray2[i]);
   }
   
   printf("____________________________\n");
   
   //Array from Copy2
   int* myArray3;
   myArray3 = copy2(myArray);
   
   for (int i = 0; i < SIZE; i++ ) {
      printf("val is %d \n", myArray3[i]);
   }
    
    return 0;
}
