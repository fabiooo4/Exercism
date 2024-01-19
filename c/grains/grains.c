#include "grains.h"

uint64_t square(uint8_t index) {

  if (index >= 1 && index <= 64) {
    uint64_t grains = 1;

    for (uint8_t i = 0; i < index; i++) {
      if (i == 0)
        grains = 1;
      else
        grains *= 2;
    }

    return grains;
  } else {
    return 0;
  }
}

uint64_t total() {
  uint8_t squares = 64;
  uint64_t grains = 1;
  uint64_t total = 1;

  for (uint8_t i = 0; i < squares - 1; i++) {
    grains *= 2;
    total += grains;
  }

  return total;
}
