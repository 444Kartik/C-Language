#include <stdio.h>
#include<stdlib.h>
#include<windows.h>


// Function to display welcome message
void displayWelcome() {

int i;

system("cls");
printf("Welcome to Currency Converter\n");
    printf("============================\n\n");

printf("\n\n\n");
printf("\t Please Wait   ");
for(i=1; i<=80; i++) {
	
	printf(".");
	Sleep(30);
}


system("cls");
    printf("Welcome to Currency Converter\n");
    printf("============================\n\n");
    printf("Convert between top 10 currencies of the world plus Indian Rupee.\n\n");


}


// Function to display currency options
void displayCurrencyOptions() {
    printf("Currency Options:\n");
    printf("1. US Dollar (USD)\n");
    printf("2. Euro (EUR)\n");
    printf("3. Japanese Yen (JPY)\n");
    printf("4. British Pound (GBP)\n");
    printf("5. Australian Dollar (AUD)\n");
    printf("6. Canadian Dollar (CAD)\n");
    printf("7. Swiss Franc (CHF)\n");
    printf("8. Chinese Yuan (CNY)\n");
    printf("9. Swedish Krona (SEK)\n");
    printf("10. New Zealand Dollar (NZD)\n");
    printf("11. Indian Rupee (INR)\n\n");
}


// Function to get currency amount from user
float getCurrencyAmount() {
    float amount;
    printf("Enter the amount to convert: ");
    scanf("%f", &amount);
    return amount;
}


// Function to convert currency
float convertCurrency(float amount, float exchangeRate) {
    return amount * exchangeRate;
}


// Function to display result
char y;

void displayResult(float amount, char fromCurrency[], char toCurrency[], float result) {
    printf("\n%.2f %s is equal to %.2f %s.\n\n", amount, toCurrency , result, fromCurrency );
    Sleep(300);
    printf("\n Press Enter To Continue : ");
    fflush(stdin);
    scanf("%c",&y);
}


int main() {


char x;


Start:
fflush(stdin);


    // Welcome message
    displayWelcome();


    // Currency options
    displayCurrencyOptions();


    // Current exchange rates
    float exchangeRates[] = {1.0, 0.89, 109.65, 0.75, 1.33, 1.25, 0.92, 6.36, 8.73, 1.47, 84.27};
    char *currencies[] = {"USD", "EUR", "JPY", "GBP", "AUD", "CAD", "CHF", "CNY", "SEK", "NZD", "INR"};


    // Get currency selections from user
    int from, to;
      printf("Enter the currency to convert from (1-11): ");
    scanf("%d", &to);
    printf("Enter the currency to convert to (1-11): ");
    scanf("%d", &from);


    // Get amount to convert
    float amount = getCurrencyAmount();


    // Convert currency
    float result = convertCurrency(amount, exchangeRates[from - 1] / exchangeRates[to - 1]);


    // Display result
    displayResult(amount, currencies[from - 1], currencies[to - 1], result);

    // Thank you message

system("cls");
printf("\n\n ---***Currency Converter***--- \n\n");


Restart:
fflush(stdin);


printf("Are You want to Restart The Currency Converter? \n ");
printf("Enter Y for yes || N for no : ");
scanf("%c",&x);


if(x == 'Y' || x == 'y') {

printf("OK Restarting it !!! \n ");
Sleep(3000);
system("cls");
goto Start;

}

else if(x == 'N' || x == 'n') {

    printf("Thank you for using Currency Converter.\n");
    printf("         Stay Blessed Always! ");

}


else {
printf("Wrong Input ! \n ");
printf("  Please Enter Again --- \n\n");
goto Restart;

}

    return 0;
}
