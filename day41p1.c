#include <stdio.h>
 
int main() {
    char s[1000];
    int i = 0, count = 0;
    scanf(" %[^\n]", s);
    while (s[i] != '\0') {
        count++;
        i++;
    }
    printf("%d\n", count);
    return 0;
}