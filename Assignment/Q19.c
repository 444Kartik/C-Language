#include<stdio.h>
int main() {

int n,c;
int rem,arm=0;

printf("\n\n Find a Given no. is Armstrong or not?...\n");
printf(" Enter any No. : ");
scanf("%d",&n);

c = n;

while(n != 0) {
rem = n%10;
arm = arm + (rem*rem*rem);
n = n/10;
}

if(c == arm) {
printf(" Yes it's an Armstrong Number... \n"); }

else if(c != arm) {
printf(" No it's not an armstrong number \n");  }


    return 0;
}