#include<stdio.h>

int main() {

double a = 5.67;
int b = 9;
double result;

result = (int)a+b; //a is explicit conveted to int type 👍
printf("%lf",result); //output is 14.00

    return 0;
}