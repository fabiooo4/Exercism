#include "armstrong_numbers.h"

int power(int base, int power) {
  int result = 1;
  for (int i = 0; i < power; i++) {
    result *= base;
  }

  return result;
}

bool is_armstrong_number(int candidate) {
  int digits = 0;
  int unit = 0;
  int sum = 0;
  int num = candidate;

  while (num > 0) {
    num /= 10;
    digits++;
  }

  num = candidate;

  while (num > 0) {
    unit = num % 10;
    sum += power(unit, digits);
    num /= 10;
  }

  if (candidate == 0 || sum == candidate)
    return true;
  else
    return false;
}
