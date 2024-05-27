#include<stdio.h>

int main() {

float s1,s2,s3,s4,s5;
float total,per;

Start:
printf("\n\n Percentage and Division of of 5subjects :- \n");
printf(" Enter Marks for Hindi : ");
scanf("%f",&s1);
printf(" Enter Marks for English : ");
scanf("%f",&s2);
printf(" Enter Marks for Sanskrit : ");
scanf("%f",&s3);
printf(" Enter Marks for Maths : ");
scanf("%f",&s4);
printf(" Enter Marks for Science : ");
scanf("%f",&s5);

total = s1+s2+s3+s4+s5;
per = total/5;

printf("\n Total Marks of 5 Subjects = %.2f \n",total);
printf(" Percentage of 5 Subjects = %.2f \n",per);

if(per >= 90 && per <= 100) {
printf(" 1st Division "); }
else if(per >= 75 && per <= 89) {
printf(" 2nd Division "); }
else if(per >= 60 && per <= 74) {
printf(" 3rd Division "); }
else if(per >= 35  && per <= 59) {
printf(" 4th Division "); }
else if(per >= 0 && per <= 34 ) {
printf(" Fail "); }
else {
printf(" Please Enter Valid Marks under 100 of each Subject ");
goto Start;
printf("\n\n"); }

    return 0;
}