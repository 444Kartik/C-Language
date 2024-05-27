#include<stdio.h>

int main() {

int i;
float n[5];
float Sum=0;
float Avg;

printf("\n\n Average of 4 Numbers:- \n");
printf("\n Enter 4 Numbers :- \n");

for( i=1; i<5 ; i++) {
printf(" Enter %d Number : ",i);
scanf("%f",&n[i]); }

for(i=1 ; i<5 ; i++) {
Sum = Sum + n[i]; }

Avg = Sum/4;

printf(" The Average of 4 Numbers are : %.3f",Avg);

    return 0;
}