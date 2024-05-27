     /* what is output of this Q :-

     int result = '8' + 12; */

#include<stdio.h>

int main() {

int result = '8' + 12; //here '8' is char data type variable and here implicit to int ascii
                       // that is 56 , so 56 + 12 = 68

printf("%d",result);    //output = 68 🤝

return 0;
}