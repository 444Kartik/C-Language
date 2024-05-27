#include<stdio.h>
#include<windows.h>
void main() {

char n;
char a;


Sound:
fflush(stdin);
printf("\n\n Press 1 for sound : ");
scanf("%c",&n);

if (n == '1') {

    fflush(stdin);
    printf(" !! Warning Don't Put Earphones While Listening This...");
    printf(" Press Enter To Hear : ");
    scanf("%c",&a);

Beep(700, 800);
Sleep(80);
Beep(1000, 500);
Sleep(60);
Beep(850, 700);
Sleep(50);
Beep(700, 800);
Sleep(80);
Beep(1000, 500);
Sleep(60);
Beep(850, 700);
Sleep(50);
Beep(700, 800);
Sleep(80);
Beep(1000, 500);
Sleep(60);
Beep(850, 700);
Sleep(50);
Beep(700, 800);
Sleep(80);
Beep(1000, 500);
Sleep(60);
Beep(850, 700);
Sleep(50);
Beep(1250, 900);
Sleep(50);
Beep(850, 700);
Sleep(50);
Beep(700, 800);
Sleep(80);
Beep(1000, 500);
Sleep(60);

}

else {  
printf("You Entered Wrong Choice...!! \n\n");
printf("Enter Again...");
Sleep(1800);
system("cls");
goto Sound;  }


printf("\n Are You Want To Restart it? \n Press y For yes [or] Press n for no : ");
scanf("%c",&a);

if(a == 'y' || a == 'Y') {
    system("cls");
goto Sound;
}

else {
    printf("Thanks For Testing our Program...! \n\n\n");
}

}