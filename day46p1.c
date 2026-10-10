#include <stdio.h>
 
int main() {
    char s[1000], ch;
    int i = 0;
    scanf(" %[^\n]", s);
    while (s[i] != '\0') {
        ch = s[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            printf("%c", ch);
        }
        i++;
    }
    printf("\n");
    return 0;
}