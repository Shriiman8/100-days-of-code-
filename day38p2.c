#include <stdio.h>
 
int main() {
    int n, i, j, symmetric = 1;
    int m[100][100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (m[i][j] != m[j][i]) {
                symmetric = 0;
            }
        }
    }
    if (symmetric == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}