#include <stdio.h>
 
int main() {
    char s[1000], x;
    int i = 0, count = 0;
    scanf(" %[^\n]", s);
    scanf(" %c", &x);
    while (s[i] != '\0') {
        if (s[i] == x) {
            count++;
        }
        i++;
    }
    printf("%d\n", count);
    return 0;
}