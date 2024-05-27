#include<stdio.h>

int main() {

int i,n;
int sum=0;

printf("\n\n Sum of Series Calculator:- \n");
printf(" Enter The No. : ");
scanf("%d",&n);

for(i=1; i<n; i++) {
printf("%d + ",i);
sum = sum + i; }

sum = sum + n;
printf("%d = %d \n\n",n,sum);


    return 0;
}