#include<stdio.h>

int main() {

float s1,s2,s3,s4,s5;
float sum=0,per;

printf("\n\n Percentage of Five Subjects :- \n");
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

sum = s1+s2+s3+s4+s5;
per = sum/5;

printf(" The Percentage of 5 Subjects is : %.2f \n\n",per);

    return 0;
} 