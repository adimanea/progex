#include<stdio.h>

int checkPal(int number) {
  int rev = 0, numberCopy = number;

  while (number != 0) {
	rev = rev * 10 + number % 10;
	number = (int) number / 10;
  }

  if (numberCopy == rev) return 1;

  return 0;
}

int main() {
  int factor1, factor2, maxPal = 0;

  for (factor1 = 999; factor1 >= 100; factor1--)
	for (factor2 = 999; factor2 >= 100; factor2--)
	  if (checkPal(factor1 * factor2))
		if (factor1 * factor2 > maxPal)
		  maxPal = factor1 * factor2;

  printf("%d is the largest 2-factor 3-digit palindrome.\n", maxPal);
  
  return 0;
}
  
