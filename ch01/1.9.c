#include <stdio.h>

main() {
  int c, lastc;

  lastc = '_';
  while ((c = getchar()) != EOF) {
	if (c == ' ') {
	  if (lastc != ' ') {
		putchar(c);
	  }
	} else {
	  putchar(c);
	}

	lastc = c;
  }
}
