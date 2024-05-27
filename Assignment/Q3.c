#include<stdio.h>

int main() {

float n1,n2,n3,n4;
float Avg;

printf("\n\n Average of 4 Numbers:- \n");
printf("\n Enter 4 Numbers : ");
scanf("%f %f %f %f",&n1,&n2,&n3,&n4);

Avg = (n1+n2+n3+n4) /4;

printf(" The Average of 4 Numbers are : %.3f",Avg);

    return 0;
}