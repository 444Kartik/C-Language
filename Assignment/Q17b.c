#include<stdio.h>

int main() {

int num,sum=0;
int rev=0,rem;

printf("\n\n   Reverse a Number :- \n");
printf(" Enter a Number = ");
scanf("%d",&num);

printf("\n Reversed No. is = ");

while(num != 0) {

rem = num%10;
sum = sum + rem;
printf("%d",rem);
num = num/10;
}

printf("\n Sum of Reversed No. : %d \n",sum);
printf("\n\n");

return 0;
}