#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    char input[20];
    char *names[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
                     "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    enum Month m;
    int found = 0;

    scanf("%19s", input);

    for (int i = 0; i < 12; i++) {
        if (strcmp(input, names[i]) == 0) {
            m = (enum Month)i;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Invalid input\n");
        return 0;
    }

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
    }

    return 0;
}