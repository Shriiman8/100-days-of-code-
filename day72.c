#include <stdio.h>

int main() {
    char line[100];

    FILE *fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while (fgets(line, 100, fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}