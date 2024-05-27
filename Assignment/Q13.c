#include<stdio.h>

int main() {

int a,b,c;

Start:
printf("\n\n Check Greatest Among 3 Numbers:- \n");
printf(" Enter 1st Number : ");
scanf("%d",&a);
printf(" Enter 2nd Number : ");
scanf("%d",&b);
printf(" Enter 3rd Number : ");
scanf("%d",&c);

if(a>b && a>c && b!=c) {
    printf("<--- 1st Number is Greatest --->"); }

else if(a>b && a>c && b == c) {
    printf("<--- 1st Number is Greatest ---> \n");
    printf("<--- and No. 2 = 3 --->"); }

else if(b>a && b>c && a!=c ) {
   printf("<--- 2nd Number is Greatest ---> \n"); }

else if(b>a && b>c && a == c) {
    printf("<--- 2nd Number is Greatest ---> \n");
    printf("<--- and No. 1 = 3 --->"); }

else if(c>a && c>b && a!=b) {
    printf("<--- 3rd Number is Greatest ---> \n"); }

else if(c>a && c>b && a == b) {
    printf("<--- 3rd Number is Greatest ---> \n");
    printf("<--- and No. 1 = 2 --->"); }

else if(a==b && b!=c && a>c){
    printf("<--- number 1 = number 2 --->\n");
    printf("<--- and number 1,2 are greatest --->");}  

else if(a==c && b!=c && a>b){
    printf("<--- number 1 = number 3 --->\n");
    printf("<--- and number 1,3 are greatest --->");}  

else if(b==c && a!=c && b>a){
    printf("<--- number 2 = number 3 --->\n");
    printf("<--- and number 2,3 are greatest --->");}  

else if( a==b && b==c ) {
    printf(" All Numbers Are Equal "); }

    return 0;
}