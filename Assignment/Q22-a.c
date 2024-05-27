#include<stdio.h>

int main() {

int n,sum=0;
int a,i;

printf("\n\n Program to print like this [1 4 9 16...] :- \n");
printf(" Enter no. of Terms = ");
scanf("%d",&n);

printf(" Series =  ");

for(i=1 ; i<=n ; i++) {
a = 0;    
a = i * i;
printf("%d ",a);
sum = sum + a;
}

printf("\n Sum of this Series = %d \n\n",sum);

    return 0;
}