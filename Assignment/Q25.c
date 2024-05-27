#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
    int i=0;
    char str1[50], str2[50], result[100];

    // Using strlen to find the length of a string
    printf("\n\n Enter the first string: ");
    scanf("%s", str1);
    printf(" The first string is = %s\n", str1);
    i = strlen(str1);

    Sleep(70);
    printf(" Length of the first string = %d\n\n", i);

    Sleep(70);
    // Using strcpy to copy a string
    strcpy(result, str1);
    printf(" Coping string using strcpy :-\n");
    printf(" Now Result String is : %s\n\n", result);

    Sleep(70);
    // Using strcat to concatenate two strings
    printf(" Enter the second string: ");
    scanf("%s", str2);
    Sleep(70);
    strcat(result," ");
    strcat(result, str2);
    printf(" Now Result String is : %s\n\n", result);

    Sleep(70);
    // Using strcmp to compare two strings
    if (strcmp(str1, str2) == 0) {              //if strcmp returns 0 then both strings are same
        printf(" The two strings [ %s and %s] are same.\n",str1,str2); } 

    else {
        printf(" The two strings [ %s and %s] are same.\n",str1,str2); }

    return 0;
}
