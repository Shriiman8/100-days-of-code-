#include <stdio.h>
 
int main() {
    char s[1000], ch;
    int i = 0, first = 1;
    scanf(" %[^\n]", s);
    while (s[i] != '\0') {
        // a new word starts when current char is not a space and previous is a space (or start)
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            ch = s[i];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 32;
            }
            if (first == 0) {
                printf(".");
            }
            printf("%c", ch);
            first = 0;
        }
        i++;
    }
    printf("\n");
    return 0;
}