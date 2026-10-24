#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}