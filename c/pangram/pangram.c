#include "pangram.h"

bool is_pangram(const char *sentence) {
  char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
  int count = 0;
  int i = 0;

  if (sentence) {
    while (sentence[i]) {
      for (int j = 0; j < 26; j++) {
        if (sentence[i] == alphabet[j] || sentence[i] == alphabet[j] - 32) {
          alphabet[j] = '0';
          count++;
        }
      }
      i++;
    }
  }

  if (count == 26)
    return true;
  else
    return false;
}
