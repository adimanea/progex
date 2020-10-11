#include<iostream>

unsigned long int collatzLength(unsigned long int n) {
  unsigned long int length = 0;
  while (n != 1)
	if (n % 2 == 0) {
	  n = (unsigned long int) n / 2;
	  length += 1;
	}
	else {
	  n = 3 * n + 1;
	  length += 1;
	}
  return length;
}

int main() {
  unsigned long int start, thisOne;
  unsigned long int maxLength = 0;

  for (start = 1000000; start > 1; start--)
	if (maxLength < collatzLength(start)) {
	  maxLength = collatzLength(start);
	  thisOne = start;
	}

  printf("%lu is the longest Collatz sequence starting at %lu\n", maxLength, thisOne);
  
  return 0;
}
