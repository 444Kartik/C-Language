#include <stdio.h>

int main() {
    int numbers[20],i;
    int evenCount = 0, oddCount = 0;


    // Accepting 20 numbers in an array
    printf("\n Enter 20 numbers :-");
    for ( i = 0; i < 20; ++i) {
        //printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);             }


    // Displaying even numbers and counting them
    printf("\nEven numbers:\n");
    for ( i = 0; i < 20; ++i) {
        if (numbers[i] % 2 == 0) {          //Reminder 0 = an even number
            printf("%d\n", numbers[i]);
            evenCount++;           }     }
    printf("Total even numbers: %d\n", evenCount);



    // Displaying odd numbers and counting them
    printf("\nOdd numbers:\n");
    for ( i = 0; i < 20; ++i) {
        if (numbers[i] % 2 != 0) {        //Reminder is not equals to 0 = an add number
            printf("%d\n", numbers[i]);
            oddCount++;            }     }
    printf("Total odd numbers: %d\n", oddCount);



    return 0;
}
