#include<stdio.h>

int main() {

int a=10, b=3;

float c = (float)a/b; //here var a is explicited to float data type & 
                      // as var a is converted to float , var b is implicited to float 
                     // so here 10.000/3.000 = 3.333
printf("%f \n",c); //output = 3.333

//---------------------------------------------------------------------

float d = (float)(a/b); //here the result of int type (a/b) that is 3 is explicited to float
                         // that is 3.000
printf("%f",d); //output = 3.000

    return 0;
}