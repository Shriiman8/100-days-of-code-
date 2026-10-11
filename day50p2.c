#include <stdio.h>
 
int main() {
    char s[1000];
    int i, j, k, len = 0;
    scanf(" %[^\n]", s);
    while (s[len] != '\0') {
        len++;
    }
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", s[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
