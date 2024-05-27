#include <stdio.h>

void function() {
	int x = 20; // local variable
	static int y = 30; // static variable 
                      //it will return its updated value even after a function end & until the program ends off

	x = x + 10;
	y = y + 10;
	printf(" Local: %d\n Static: %d\n", x, y);
}

int main()  {

	printf("First Call\n");
	function();
	printf("Second Call\n");
	function();
	printf("Third Call\n");
	function();

	return 0;
}
