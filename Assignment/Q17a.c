#include<stdio.h>

int main() {

int num,sum=0;
int rev=0,rem;

printf("\n\n Reverse a Number :- \n");
printf(" Enter a Number = ");
scanf("%d",&num);

while(num != 0) {
rem = num%10;
sum = sum + rem;
rev = rev*10 + rem;
num = num/10;
}

printf(" Reversed No. = %d \n",rev);
printf(" Sum of Reversed No. = %d \n\n",sum);


    return 0;
}