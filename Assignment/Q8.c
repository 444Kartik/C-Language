#include<stdio.h>

int main() {

char want;
float C,F;

Start:
fflush(stdin);
printf("\n\n Temperature Converter :- \n");
printf(" Enter 1 to convert Celcius to Farenheit \n");
printf(" Enter 2 to convert Farenheit to Celcius \n");
printf(" Enter your choice : ");
scanf("%c",&want);

//======================================================================================

if(want == '1') {

printf("\n Celcius to Farenheit Converter:- \n");
printf(" Enter Temp. in Celcius : ");
scanf("%f",&C);

F = (C*1.8) + 32;
printf(" %.2f Celcius = %.2f Farenheit \n\n",C,F);  }

//======================================================================================

else if(want == '2') {

printf("\n Farenheit to Celcius Converter:- \n");
printf(" Enter Temp. in Farenheit : ");
scanf("%f",&F);

C = (F - 32) * 5/9;
printf(" %.2f Farenheit = %.2f Celcius \n\n",F,C); }

//======================================================================================

else {
printf(" You Entered a Wrong Choice...!! \n\t Enter Again \n");
goto Start; }

//======================================================================================

    return 0;
}