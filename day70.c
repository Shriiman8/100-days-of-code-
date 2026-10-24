#include <stdio.h>

int main() {
    char str[200];
    fgets(str, 200, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((i == 0 || str[i - 1] == ' ') && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);
    return 0;
}