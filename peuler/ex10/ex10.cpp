#include<iostream>
#include<math.h>

int isPrime(int n) {
  for (int i = 2; i <= (int) sqrt(n); i++)
	if (n % i == 0) return 0;

  return 1;
}

int main() {
  unsigned long int number = 2000000, s = 0;

  while (number > 1) {
	if (isPrime(number)) s += number;
	number--;
  }

  printf("%lu is the sum of all primes below 2 mil.\n", s);

  return 0;
}
