#include<stdio.h>
#include<math.h>

int main() {

int n,i;
int a,sum=0;

printf("\n\n Program to print like this [4 16 36 64...] :- \n");
printf(" Enter no. of Terms : ");
scanf("%d",&n);

n = n*2;
printf(" Series =  ");

for(i=2 ; i<=n ; i = i+2) {
a = pow(i,2);
printf("%d ",a);
sum = sum + a;
}

printf("\n Sum of this Series = %d \n\n",sum);


    return 0;
}