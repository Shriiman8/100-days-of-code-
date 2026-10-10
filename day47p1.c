#include <stdio.h>
 
int main() {
    char a[1000], b[1000];
    int count1[26] = {0}, count2[26] = {0};
    int i, anagram = 1;
    scanf(" %[^\n]", a);
    scanf(" %[^\n]", b);
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            count1[a[i] - 'a']++;
        } else if (a[i] >= 'A' && a[i] <= 'Z') {
            count1[a[i] - 'A']++;
        }
    }
    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] >= 'a' && b[i] <= 'z') {
            count2[b[i] - 'a']++;
        } else if (b[i] >= 'A' && b[i] <= 'Z') {
            count2[b[i] - 'A']++;
        }
    }
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            anagram = 0;
        }
    }
    if (anagram == 1) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }
    return 0;
}