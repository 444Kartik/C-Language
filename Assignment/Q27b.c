#include <stdio.h>

// Function to find the largest element in an array
int findLargest(int numbers[10]) {
    int i,largest;
      largest = numbers[0];

    for (i = 1; i<10; ++i) {
        if (numbers[i] > largest) {
            largest = numbers[i];   }    }

    return largest;
}


int main() { 
    int n,i;

    // Declare an array of the given size
    int numbers[10];

printf("\n\n");

    for (i = 0; i<10; i++) {
        printf(" Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);    }


    // Call the function to find the largest element
    int largest = findLargest(numbers);

    // Display the result
    printf("The largest element in the array is: %d \n\n", largest);

    return 0;
}
