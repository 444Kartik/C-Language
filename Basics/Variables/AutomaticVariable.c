#include<stdio.h>

void function() {

	int x = 10; // local variable (also automatic)
	auto int y = 20; // automatic variable
	printf("Auto Variable: %d", y);
                            //auto variable is synonyme of local variable
}

int main() {

	function();
	return 0;
}
