#include<stdio.h>
#include<stdbool.h>

int main() {

bool num1;

     num1 = (12 > 9); //true statement 
bool num2 = (5 < 3);  //false statement
bool num3 = (9 == 6); //false statement
bool num4 = (9 != 6); //true statement
bool num5 = (9 >= 6); //true statement
bool num6 = (9 <= 6); //false statement

printf("%d \n",num1);   //output = 1
printf("%d \n",num2);   //output = 0
printf("%d \n",num3);   //output = 0
printf("%d \n",num4);   //output = 1 
printf("%d \n",num5);   //output = 1 
printf("%d \n",num6);   //output = 0 



    return 0; 
}