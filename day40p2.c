#include <stdio.h>
 
int main() {
    int r1, c1, r2, c2, i, j, k, sum;
    int a[100][100], b[100][100];
    scanf("%d %d", &r1, &c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &r2, &c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    if (c1 != r2) {
        printf("Multiplication not possible\n");
        return 0;
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            sum = 0;
            for (k = 0; k < c1; k++) {
                sum = sum + a[i][k] * b[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}