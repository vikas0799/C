#include <stdio.h>

void string_concat(char *str1, char *str2) {
    while(*str1 != '\0') {
        str1++;
    }
    while(*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() {
    char str1[20];
    scanf("%s",&str1);
    char str2[20];
    scanf("%s",&str2);
    string_concat(str1, str2);
    printf("%s", str1);
    return 0;
}
