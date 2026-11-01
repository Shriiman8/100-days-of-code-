
#include <stdio.h>

int main() {
    FILE *fp;
    char text[500];

    printf("Enter text: ");
    gets(text);

    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}