#include <stdio.h>
 
int main() {
    char s[1000];
    int i, j, len = 0, found = 0;
    scanf(" %[^\n]", s);
    while (s[len] != '\0') {
        len++;
    }
    for (i = 0; i < len && found == 0; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            for (j = i + 1; j < len; j++) {
                if (s[j] == s[i]) {
                    printf("%c\n", s[i]);
                    found = 1;
                    break;
                }
            }
        }
    }
    if (found == 0) {
        printf("-1\n");
    }
    return 0;
}