#include <stdio.h>
 
int main() {
    char s[1000];
    int n = 0, i, j, maxLen = 0;
    int seen[256];
    scanf(" %[^\n]", s);
    while (s[n] != '\0') {
        n++;
    }
 
    for (i = 0; i < n; i++) {
        for (j = 0; j < 256; j++) {
            seen[j] = 0;
        }
        for (j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]] == 1) {
                break;
            }
            seen[(unsigned char)s[j]] = 1;
            if (j - i + 1 > maxLen) {
                maxLen = j - i + 1;
            }
        }
    }
    printf("%d\n", maxLen);
    return 0;
}