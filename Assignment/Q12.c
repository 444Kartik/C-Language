#include<stdio.h>

int main() {

char want;
char days;

Start:
fflush(stdin);
printf("\n\n Enter Alphabet to print Week Days:- \n\n");
printf("\n Enter 1 to cont. by Switch \n");
printf(" Enter 2 to cont. by if-else \n");
printf(" Enter your choice : ");
scanf("%c",&want);

if(want == '1') {

fflush(stdin);
printf(" Enter Alphabet : ");
scanf("%c",&days);
printf("\n  ");

switch (days) {

    case 'm' : 
    printf("Monday");
    break;

    case 't' : 
    printf("Tuesday");
    break;

    case 'w' :
    printf("Wednesday");
    break;

    case 'h' :
    printf("Thursday");
    break;

    case 'f' :
    printf("Friday");
    break;

    case 'r' :
    printf("Saturday");
    break;

    case 's' :
    printf("Sunday");
    break;

    case 'M' : 
    printf("Monday");
    break;

    case 'T' : 
    printf("Tuesday");
    break;

    case 'W' :
    printf("Wednesday");
    break;

    case 'H' :
    printf("Thursday");
    break;

    case 'F' :
    printf("Friday");
    break;

    case 'R' :
    printf("Saturday");
    break;

    case 'S' :
    printf("Sunday");
    break;

    default :
    printf("  Wrong Input...!! \n  Enter Again \n\n");
    goto Start;
  }
}


else if(want == '2') {

fflush(stdin);
printf(" Enter Alphabet : ");
scanf("%c",&days);
printf("\n  ");

if(days == 'm' || days == 'M')   {
printf("Monday");  }

else if(days == 'T' || days == 't')   {
printf("Tuesday");  }

else if(days == 'W' || days == 'w')   {
printf("Wednesday");  }

else if(days == 'H' || days == 'h')   {
printf("Thursday");  }

else if(days == 'F' || days == 'f')   {
printf("Friday");  }

else if(days == 'R' || days == 'r')   {
printf("Saturday");  }

else if(days == 'S' || days == 's')   {
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