//great among 3 numbers

#include<stdio.h>

int main() {

int a = 10, b = 20, c = 50;

int result = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
printf("%d is greatest",result);

    return 0;
}