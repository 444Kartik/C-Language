#include<stdio.h>

int main() {

int age = 10;
double marks = 96.0;
float per = 88.00;
char division = 'a';

printf("The size of int is = %d \n",sizeof(age));
         //or
printf("The size of int is = %d \n",sizeof(int));

printf("The size of double is = %d \n",sizeof(marks));
printf("The size of float is = %d \n",sizeof(per));
printf("The size of char is = %d \n",sizeof(division));

    return 0;
}