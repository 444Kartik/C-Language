#include<stdio.h>

void function() {
    int x = 50; //x is local a variable
                //exclusive for this function
    printf("x in new func = %d \n",x); 
 }


int main() {
int x = 10; //here x is also a local variable
            //exclusive for this main function
printf("x in main func = %d \n",x); 


function();
    return 0;
}