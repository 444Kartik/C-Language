#include<stdio.h>

int main() {

int n,factorial=1,i;


printf("\n\n Factorial of any number:- \n");
printf(" Enter any No. : ");
scanf("%d",&n);


 for(i=n; i>1; i--) {

printf("%d * ",i);
factorial = factorial * i; }

printf("%d = %d \n",i,factorial);
printf("The Factorial of %d is = %d \n\n",n,factorial);



/* for(i=1; i<n ; i++) {

    printf("%d * ",i);
    factorial = factorial * i; }

    factorial = factorial*n;

 printf("%d = %d \n",n,factorial);
 printf("The Factorial of %d is = %d \n\n",n,factorial); */


    return 0;
}