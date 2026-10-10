#include <stdio.h>
 
int main() {
    char s[1000];
    int i, len = 0, palindrome = 1;
    scanf(" %[^\n]", s);
    while (s[len] != '\0') {
        len++;
    }
    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            palindrome = 0;
        }
    }
    if (palindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
    return 0;
}