#include<stdio.h>

int main() {

int a,b,c;
char want;

Start:
fflush(stdin);
printf("\n\n Swapping Two Variables:- \n");
printf(" Enter 1 to for Swapping using two Variables \n");
printf(" Enter 2 to for Swapping using three Variables \n");
printf(" Enter your Choice : ");
scanf("%c",&want);

//=======================================================================================

if(want == '1') {

printf("\n Swapping using Two Variables:- \n");
printf(" Enter 1st Number = ");
scanf("%d",&a);
printf(" Enter 2nd Number = ");
scanf("%d",&b);

a = a-b;
b = a+b;
a = b-a;

printf(" Variables are Succesfully Swapped...!! \n");
printf(" Now A = %d and B = %d \n\n",a,b); }

//=======================================================================================

else if(want == '2') {

printf("\n Swapping using Two Variables:- \n");
printf(" Enter 1st Number = ");
scanf("%d",&a);
printf(" Enter 2nd Number = ");
scanf("%d",&b);

c = a;
a = b;
b = c;
printf(" Variables are Succesfully Swapped...!! \n");
printf(" Now A = %d and B = %d \n\n",a,b); }

//=======================================================================================

else{

printf(" You Entered Wrong Choice...!! \n\t Error! \n\n");
goto Start; }


    return 0;
}