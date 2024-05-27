#include<stdio.h>

int main() {

char str[100];
fflush(stdin);

printf("Enter a string: "); //KARTik
scanf("%[A-Z]s", str); 
printf("You entered: %s\n\n", str); //KART
fflush(stdin);


printf("Enter a string: "); //Kartik_Sharma0
scanf("%[A-Z,_,a-z]s", str); 
printf("You entered: %s\n\n", str); //Kartik_Sharma
fflush(stdin);


printf("Enter a string: "); //12345Kartik
scanf("%[1-9]s", str); 
printf("You entered: %s\n\n", str); //12345
fflush(stdin);


printf("Enter a string: "); //Kartik Sharma
scanf("%[^h]s", str); 
printf("You entered: %s\n\n", str); //Kartik S
fflush(stdin);


//-------------------------------------> gets() function by scanf <-----------------------------------
printf("Enter a string: "); //Kartik Sharma 12345 
scanf("%[^\n]s", str); 
printf("You entered: %s\n\n", str); //Kartik Sharma 12345 
fflush(stdin);

    return 0;
}