/* Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/ 

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;

    FILE *fp;

    // -------- Write to binary file --------
    fp = fopen("employee.dat", "wb");  // write in binary mode
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Input employee data
    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    // Write structure to file
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("\nEmployee details stored in binary file.\n");

    // -------- Read from binary file --------
    fp = fopen("employee.dat", "rb");  // read in binary mode
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&e_read, sizeof(e_read), 1, fp);
    fclose(fp);

    // Display data read from file
    printf("\nData read from file:\n");
    printf("Name: %s\n", e_read.name);
    printf("ID: %d\n", e_read.id);
    printf("Salary: %.2f\n", e_read.salary);

    return 0;
}
