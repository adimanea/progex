#include<iostream>
#include<math.h>

#define NUMBER 600851475143

long isprime(long x) {
  for (long i = 2; i <= (int) sqrt(x); i++)
	if (x % i == 0)
	  return 0;
  return 1;
}

int main() {
  unsigned long divisor = (long) sqrt(NUMBER);

  for (int i = (int) sqrt(NUMBER); i >= 2; i--)
	if (isprime(i) && (NUMBER % i == 0)) {
	  std::cout<<"The largest prime divisor of "<<NUMBER<<" is "<<i<<std::endl;
	  break;
	}

  return 0;
}
