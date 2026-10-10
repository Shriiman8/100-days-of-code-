#include <stdio.h>
 
int main() {
    int r, c, i, j, s;
    int m[100][100];
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (s = 0; s <= r + c - 2; s++) {
        for (i = 0; i < r; i++) {
            j = s - i;
            if (j >= 0 && j < c) {
                printf("%d ", m[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}