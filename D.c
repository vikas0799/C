#include <stdio.h>
#include <string.h>

int count_occurrences(char *str, char *word){
     int count = 0;
  int word_len = strlen(word);
  char *start = str;
  while ((start = strstr(start, word)) != NULL) {
    count++;
    start += word_len;
  }
  return count;
}

int main() {
  char str[] = "OYOYO OYO";
  char word[] = "OYO";
  int count = count_occurrences(str, word);
  printf("%d\n", count); // 2

  char str2[] = "I am good";
  char word2[] = "I am not good";
  int count2 = count_occurrences(str2, word2);
  printf("%d\n", count2); // 1

  char str3[] = "I love programming";
  char word3[] = "love";
  int count3 = count_occurrences(str3, word3);
  printf("%d\n", count3); // 1

   char str4[] = "I love programming";
  char word4[] = "hate";
  int count4 = count_occurrences(str4, word4);
  printf("%d\n", count4);

  return 0;
}
