#include<stdio.h>

int main() {

double a = 5.67;
int b = 9;

int result = a + b; // here int b is converted to double value 9.00
                    //then it is added to 5.67 & making the result 14.67

printf("%d",result); //output is 14 , bcz result variable is int type 

    return 0;
}