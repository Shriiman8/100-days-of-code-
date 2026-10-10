#include <stdio.h>
 
int main() {
    int r, c, i, j;
    int m[100][100];
    int rowSum[100];
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            rowSum[i] = rowSum[i] + m[i][j];
        }
    }
    for (i = 0; i < r; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");
    return 0;