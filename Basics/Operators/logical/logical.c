#include<stdio.h>
#include<stdbool.h>

int main() {
int age = 19;
int height = 6;

{
bool result = (age >= 18) && (height < 7.0); //for true, both conditions should be true
printf("&& result is = %d \n",result);
}


{
bool result = (age >= 18) || (height > 7.0); //for true result, any conditions should be true
printf("|| result is = %d \n",result);
}


{
bool result = !(age >= 20); 
printf("! result is = %d \n",result);  
}

    return 0;
}