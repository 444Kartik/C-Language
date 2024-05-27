#include<stdio.h>

int x = 108; // global variable x is declared

void function1() { printf("X in Function 1: %d\n", x); }

void function2() { printf("X in Function 2: %d\n", x); }

int main()  {

printf("X in main Function: %d \n",x);

	function1();
	function2();
	return 0;
}
