#include<stdio.h>

int main() {

int r;
float PI,AREA;

printf("\n\n Area of Circle:- \n");
printf(" Enter Radius of Circle : ");
scanf("%d",&r);

PI = 3.14;
AREA = PI * r * r;

printf(" The Area of Circle is %.3f Units \n\n",AREA);

    return 0;
}