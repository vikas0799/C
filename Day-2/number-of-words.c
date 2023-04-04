#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char str[MAX_LEN];
    int words = 0;
    int len, i;

    printf("Enter a string: ");
    fgets(str, MAX_LEN, stdin);   // read input string using fgets

    len = strlen(str);

    // loop through the string and count the number of words
    for (i = 0; i < len; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            words++;
        }
    }

    printf("Number of words in the string: %d\n", words+1);

    return 0;
}