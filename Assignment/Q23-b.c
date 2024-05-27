#include<stdio.h>

int main() {

int n;
int r,c;

printf("\n\n Pattern Printing - 2 :- \n");
printf(" Enter the no. of Columns = ");
scanf("%d",&n);

printf("\n");

for(c=1 ; c<=n ; c++) {
for(r=1 ; r<=c ; r++) {
    printf(" *"); }
    printf("\n");    
}

printf("\n\n");

    return 0;
}