#include<stdio.h>

int main() {

/* int a = 9;
int b = 2;
double result;

result = a/b; //here a&b both int so their division result int = 4
              // and result var is double so result = 4.00


printf("%lf",result); //output = 4.000  */


                 //explicit type conversion from here
int a = 9;
int b = 2;
double result;

result = (double)a/b; //explicit type conversion here int type a & b 
                     //converted to double type, a[9.000] & b[2.000]


printf("%lf",result); //output = 4.5000

return 0;
}