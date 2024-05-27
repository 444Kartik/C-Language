#include<stdio.h>
int main() {

//-----------------------------------> \n ka use <------------------------------------------------- 
printf("hello \n"); 
printf("world \nkaise ho? \n\n\n");

//-----------------------------------> \t ka use <------------------------------------------------- 
printf("\tworld\n");  //8 bit space from here in output
printf("hanji\tworld\n"); //3 bit space from here in output
printf("hanjiii\tworld\n"); //only 1 bit space from here in output
printf("hanjiiii\tworld\n\n\n"); //again 8 bit space from here

   
//-----------------------------------> \b ka use <------------------------------------------------- 
printf("kartik\b\n");
printf("kartik\bsharma\n");
printf("kartik\b\bsharma\n\n\n");

//-----------------------------------> \r ka use <------------------------------------------------- 
printf("kartik\r\n");
printf("kartik\rsharma\n");
printf("kartikjikijay\rsharma\n");
printf("kartikjikijayho\rsharmaka\n\n\n");

//-----------------------------------> \a ka use <------------------------------------------------- 
printf("kartik\a\n\n\n"); // sound will not produce in vs code , try in dev cpp


//-----------------------------------> \\ ka use <------------------------------------------------- 
printf("\\\n\n\n"); //will print \ in output

//-----------------------------------> "" ka use <------------------------------------------------- 
printf(" \"kartik sharma\" \n");

//-----------------------------------> '' ka use <------------------------------------------------- 
printf(" \'kartik sharma\' ");

    return 0;
}