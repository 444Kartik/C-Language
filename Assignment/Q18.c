#include<stdio.h>

int main() {
int i,n;
int a=0,b=1,c;

printf("\n\n Fibonacci Series:- \n");
printf(" Enter the Number of Terms :- ");
scanf("%d",&n);

for(i=0; i<=n; i++) {

printf("%d ",a);
c = a+b;
a = b;
b = c; }

printf("\n\n");

    return 0;
}