#include <stdio.h>

// Function to find the largest element in an array
int findLargest(int numbers[],int n) {
    int i,largest;
      largest = numbers[0];

    for (i = 1; i<n; ++i) {
        if (numbers[i] > largest) {
            largest = numbers[i];   }    }

    return largest;
}


int main() { 
    int n,i;

    printf("\n\n Enter the size of the array: ");
    scanf("%d",&n);

    // Declare an array of the given size
    int numbers[n];

    for (i = 0; i<n; i++) {
        printf(" Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);    }


    // Call the function to find the largest element
    int largest = findLargest(numbers,n);

    // Display the result
    printf("The largest element in the array is: %d \n\n", largest);

    return 0;
}
