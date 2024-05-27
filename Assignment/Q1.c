#include<stdio.h>

int main() {
int L,W;
float Area;

printf("\n Area of Triangle:- \n");

printf(" Enter Lenght : ");
scanf("%d",&L);
printf(" Enter Width : ");
scanf("%d",&W);

Area = 0.5*L*W;
printf(" Area Of Triangle is %.3f Units \n",Area);

    return 0;
}