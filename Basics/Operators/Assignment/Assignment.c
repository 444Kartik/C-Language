#include <stdio.h>

int main()  {

    // using "=" operator
    int a = 10; 
    printf("Value of a is %d\n", a);

    // using "+=" operator 
    a += 10;   //this also means a = a + 10;
    printf("Value of a is %d\n", a); 

    // using "-=" operator
    a -= 10; // a = 20 - 10;
    printf("Value of a is %d\n", a);

    // using "*=" operator
    a *= 10; //a = 10*10;
    printf("Value of a is %d\n", a);

    // using "/=" operator
    a /= 10; //a = 100/10;
    printf("Value of a is %d\n", a);

    //using "%=" operator
    a %= 3; //a = a%3;
    printf("Value of a is %d \n",a);

    return 0;
}
