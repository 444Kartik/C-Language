#include<stdio.h>

int main() {

int a = 4, b = 5;
int c = 12, d = 25;

printf("a = %d and b = %d \n",a,b);
printf("c = %d and d = %d \n\n",c,d);

printf(" a & b = %d \n",a & b);
printf(" a | b = %d \n",a | b);
printf(" a ^ b = %d \n\n",a ^ b);

printf(" c & d = %d \n",c & d);
printf(" c | d = %d \n",c | d);
printf(" c ^ d = %d \n\n",c ^ d);

printf("~a = %d \n", ~a);
printf("~b = %d \n", ~b);

return 0;
}