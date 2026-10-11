#include <stdio.h>
 
int main() {
    char s[1000];
    int i = 0, k, start, end;
    scanf(" %[^\n]", s);
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            printf(" ");
            i++;
        } else {
            start = i;
            while (s[i] != ' ' && s[i] != '\0') {
                i++;
            }
            end = i - 1;
            for (k = end; k >= start; k--) {
                printf("%c", s[k]);
            }
        }
    }
    printf("\n");
    return 0;
}