#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n, i;
    struct Student s;
    FILE *fp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%d", &s.marks);

        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    return 0;
}