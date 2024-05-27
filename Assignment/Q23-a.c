#include<stdio.h>

int main() {

int n,r,c;

printf("\n\n Pattern Printing - 1 :- \n");
printf(" Enter the no. of Columns = ");
scanf("%d",&n);

printf("\n");

for(c=1 ; c<=n ; c++) {
for(r=1 ; r<=c ; r++) {
printf(" %d",r); }
printf("\n");
}

printf("\n\n");

    return 0;
}