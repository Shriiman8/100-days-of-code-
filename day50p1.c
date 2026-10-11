#include <stdio.h>
 
int main() {
    char d[20];
    scanf("%s", d);
    printf("%c%c-Apr-%c%c%c%c\n", d[0], d[1], d[6], d[7], d[8], d[9]);
    return 0;
}