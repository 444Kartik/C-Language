#include<stdio.h>

int main() {

char want;
int days;

Start:
fflush(stdin);
printf("\n\n Enter No. to print Week Days:- \n\n");
printf("\n Enter 1 to cont. by Switch \n");
printf(" Enter 2 to cont. by if-else \n");
printf(" Enter your choice : ");
scanf("%c",&want);

if(want == '1') {

printf(" Enter Any No.[1-7] : ");
scanf("%d",&days);
printf("\n  ");

switch (days) {

    case 1 : 
    printf("Monday");
    break;

    case 2 : 
    printf("Tuesday");
    break;

    case 3 :
    printf("Wednesday");
    break;

    case 4 :
    printf("Thursday");
    break;

    case 5 :
    printf("Friday");
    break;

    case 6 :
    printf("Saturday");
    break;

    case 7 :
    printf("Sunday");
    break;

    default :
    printf("  Wrong Input...!! \n  Enter Again \n\n");
    goto Start;
  }
}


else if(want == '2') {

printf(" Enter Any No.[1-7] : ");
scanf("%d",&days);
printf("\n  ");

if(days == 1)   {
printf("Monday");  }

else if(days == 2)   {
printf("Tuesday");  }

else if(days == 3)   {
printf("Wednesday");  }

else if(days == 4)   {
printf("Thursday");  }

else if(days == 5)   {
printf("Friday");  }

else if(days == 6)   {
printf("Saturday");  }

else if(days == 7)   {
printf("Sunday");  }

else {
    printf("  Wrong Input...!! \n  Enter Again \n\n");
    goto Start; }

}


else {
 printf("  Wrong Input...!! \n  Enter Again \n\n");
    goto Start; }


printf("\n\n");

    return 0;
}