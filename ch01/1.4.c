#include <stdio.h>

main() {
  float fahr, celsius;
  float lower, upper, step;
  lower = 0;
  upper = 100;
  step = 10;

  celsius = lower;
  printf("celsius fahr\n");
  while (celsius <= upper) {
    fahr = (celsius * 9.0) / 5 + 32.0;
    printf("%3.0f    %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
