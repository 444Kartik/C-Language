#include<stdio.h>

int main() {

int n,c;
int rev=0,rem=0;

printf("\n\n Check Wheather a no. is palindrom or not:- \n");
printf(" Enter any No. : ");
scanf("%d",&n);

c = n;

while(n != 0) {

rem = n%10;
rev = rev*10 + rem;
n = n/10;
}

if(c == rev) { 
printf(" Yes %d is a Palindrome number \n\n",c); }

else if(c != rev ) {
printf(" No %d is not an Palindrome number \n\n",c); }


    return 0;
}