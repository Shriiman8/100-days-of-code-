Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/#include <stdio.h>

int main() {
    char src[50], dest[50];
    int ch;

    printf("Source File: ");
    scanf("%s", src);
    printf("Destination File: ");
    scanf("%s", dest);

    FILE *fp1 = fopen(src, "r");
    FILE *fp2 = fopen(dest, "w");

    if (fp1 == NULL) {
        printf("Source file not found");
        return 0;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully to %s", dest);

    return 0;
}