#include <stdio.h>
 
int main() {
    char s[1000];
    int i, len = 0, start = 0, maxLen = 0, maxStart = 0;
    scanf(" %[^\n]", s);
    for (i = 0; ; i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            if (len == 0) {
                start = i;
            }
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            if (s[i] == '\0') {
                break;
            }
        }
    }
    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}