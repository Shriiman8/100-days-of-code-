#include <stdio.h>
 
int main() {
    int r, c, i, j, sum = 0;
    int m[100][100];
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
            sum = sum + m[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}