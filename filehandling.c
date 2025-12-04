#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;

    fp = fopen("marksheet.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks: ");
    scanf("%d", &marks);

    fprintf(fp, "Student Marksheet\n");
    fprintf(fp, "-----------------\n");
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Roll Number: %d\n", roll);
    fprintf(fp, "Marks: %d\n", marks);

    fclose(fp);
    printf("\nMarksheet saved successfully in marksheet.txt\n");

    fp = fopen("marksheet.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char ch;
    printf("\n--- Displaying Marksheet ---\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}