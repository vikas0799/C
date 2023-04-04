#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 100

int main() {
    char str[MAX_LEN];
    int len, i;
    int upper_count = 0, lower_count = 0;

    // printf("Enter a string: ");
    fgets(str, MAX_LEN, stdin);   // read input string using fgets

    len = strlen(str);

    // loop through the string and count the number of uppercase and lowercase characters
    for (i = 0; i < len; i++) {
        if (isupper(str[i])) {
            upper_count++;
        } else if (islower(str[i])) {
            lower_count++;
        }
    }

    printf("Number of uppercase characters in the string: %d\n", upper_count);
    printf("Number of lowercase characters in the string: %d\n", lower_count);

    return 0;
}