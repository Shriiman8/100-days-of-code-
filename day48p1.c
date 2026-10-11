#include <stdio.h>
 
int main() {
    char a[1000], b[1000];
    int n1 = 0, n2 = 0, i, k, rotation = 0, match;
    scanf(" %[^\n]", a);
    scanf(" %[^\n]", b);
    while (a[n1] != '\0') {
        n1++;
    }
    while (b[n2] != '\0') {
        n2++;
    }
    if (n1 == n2) {
        // try every rotation of a and compare with b
        for (k = 0; k < n1; k++) {
            match = 1;
            for (i = 0; i < n1; i++) {
                if (a[(i + k) % n1] != b[i]) {
                    match = 0;
                    break;
                }
            }
            if (match == 1) {
                rotation = 1;
                break;
            }
        }
    }
    if (rotation == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}