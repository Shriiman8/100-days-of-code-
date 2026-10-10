#include <stdio.h>
 
int main() {
    int n, i, j, distinct = 1;
    int m[100][100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (m[i][i] == m[j][j]) {
                distinct = 0;
            }
        }
    }
    if (distinct == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}