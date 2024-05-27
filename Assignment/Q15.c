#include<stdio.h>

int main() {

float a,b;
char o;

Start:
fflush(stdin);
printf("\n\n Calculator Using Switch :- \n");
printf(" Enter Want Calculations you want for \n");
printf(" Enter [+,-,*,/] : ");
scanf("%c",&o);

printf(" Enter 2 Numbers : ");
scanf("%f %f",&a,&b);

printf("\n");

switch (o) {

 case '+' :
 printf(" %.2f + %.2f = %.2f",a,b,a+b);
 break; 

 case '-' :
 printf(" %.2f - %.2f = %.2f",a,b,a-b);
 break; 

 case '*' :
 printf(" %.2f * %.2f = %.2f",a,b,a*b);
 break; 

 case '/' :
 printf(" %.2f / %.2f = %.2f",a,b,a/b);
 break; 

 default :
 printf(" Please Enter Correct Operand...!! \n\n");
 goto Start;
}

printf("\n\n");

    return 0;
}