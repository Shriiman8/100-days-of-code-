#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    char ch;
    int chars = 0, words = 0, lines = 0;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == ' ' || ch == '\n') {
            words++;
        }

        if (ch == '\n') {
            lines++;
        }
    }

    words++;
    lines++;

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d", lines);

    return 0;
}