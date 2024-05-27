#include<stdio.h>

int main() {

float a = 3.3330;

printf("see differences 👇👇 \n\n");
printf("This like%.4f<*.*>\n",a);
printf("This like%0.4f<*.*>\n",a);
printf("This like%6.4f<*.*>\n",a); //has 6 characters, so below 6 it will not start leaving space
printf("This like%7.4f<*.*>\n",a); //more than 7, start leaving space
printf("This like%20.4f<*.*>\n",a);
printf("This like%-7.4f<*.*>\n",a); //leaving space from back
printf("This like%-15.4f<*.*>\n",a);

    return 0;
}