#include <stdio.h>
 
int main() {
    char s[1000], ch;
    int i, len = 0, lastStart;
    scanf(" %[^\n]", s);
    while (s[len] != '\0') {
        len++;
    }
    i = len - 1;
    while (i >= 0 && s[i] != ' ') {
        i--;
    }
    lastStart = i + 1;

    for (i = 0; i < lastStart; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            ch = s[i];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 32;
            }
            printf("%c.", ch);
        }
    }
    for (i = lastStart; i < len; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}