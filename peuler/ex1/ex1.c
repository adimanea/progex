#include<stdio.h>

int main() {
  int s = 0, i;

  for (i = 1; i < 1000; i++)
	if ((i % 3) * (i % 5) == 0) s += i;

  printf("The sum of all multiples of 3 or 5 below 1000 is %d.\n", s);

  return 0;
	}
