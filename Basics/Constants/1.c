#include<stdio.h>
#define PI 3.14  //defines a constant

int main() {

const int age = 30;   //defines a constant

//age = 35; // can't do that since age is a constant
//PI = 2.3; // can't do that since PI is a constant

printf("age = %d \n",age);
printf("PI = %.2f",PI);

    return 0;
}