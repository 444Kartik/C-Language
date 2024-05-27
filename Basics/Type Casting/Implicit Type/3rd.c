#include <stdio.h>
int main()
{
	int x = 10; 
    char y = 'a'; 

	x = x + y; // here compiler converts char value(y) to int ascii value [97]
               // so now x = 107

	
	float z = x + 1.0; // x[107] is implicitly converted to float [107.00]

	printf("x = %d, y = %c ,z = %f", x, y, z); 
	return 0;
}
