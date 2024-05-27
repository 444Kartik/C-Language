#include<stdio.h>

void addition(int a, int b) {
    printf("The addition of Two Numbers is : %d\n",a+b);  }

void subtraction(int a, int b) {
    printf("The subtraction of Two Numbers is : %d\n",a-b);  }

void multiplication(int a, int b) {
    printf("The multiplication of Two Numbers is : %d\n",a*b);  }

void division(float a, float b) {
    printf("The division of Two Numbers is : %.2f\n",a/b);  }


int main() {
     float a,b;
    printf("Enter Two Numbers : ");
    scanf("%f %f",&a,&b);

    addition(a,b);
    subtraction(a,b);
    multiplication(a,b);
    division(a,b);

    return 0;
}