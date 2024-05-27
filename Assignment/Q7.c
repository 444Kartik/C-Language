#include<stdio.h>

int main() {

float p,r,t;
float TA,SI;

printf("\n\n Simple Interest Calculator :- \n");
printf(" Enter Principal Amount : ");
scanf("%f",&p);
printf(" Enter Rate : ");
scanf("%f",&r);
printf(" Enter Time : ");
scanf("%f",&t);

SI = (p*r*t) /100;
TA = SI+p;
printf("\n\n Simple Interest Amount is : %.2f \n",SI);
printf(" Total Amount to be paid is : %.3f \n\n",TA);

    return 0;
}