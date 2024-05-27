#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[50];
    int n;

    // Input the filename
    printf("\n\n Enter the filename to store student information : ");
    scanf("%s", filename);

    strcat(filename,".txt");

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Open the file in write mode
    file = fopen(filename, "w");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit the program with an error code
    }

    // Input and write student information to the file
    for (int i = 0; i < n; ++i) {
        char name[50];
        int marks;
      
      fflush(stdin);

        // Input student name
        printf("Enter the name of student %d: ", i + 1);
        gets(name);

        // Input student marks
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks);

        // Write student information to the file
        fprintf(file, "%s %d\n", name, marks);
    }

    // Close the file
    fclose(file);

    printf("Student information has been successfully written to %s.\n", filename);

    return 0;
}
