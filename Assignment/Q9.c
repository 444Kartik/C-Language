#include<stdio.h>
#include<math.h>

int main() {

float p,r,t;
float CI,TA;

printf("\n\n Compound Interest Calculator :- \n");
printf(" Enter Principal Amount : ");
scanf("%f",&p);
printf(" Enter Rate : ");
scanf("%f",&r);
printf(" Enter Time : ");
scanf("%f",&t);

TA = p * ( pow((1+r/100),t) );
CI = TA - p;

printf("\n\n Compound Interest Amount is : %.2f \n",CI);
printf(" Total Amount to be paid is : %.3f \n\n",TA);

    return 0;
}