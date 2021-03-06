#include<iostream>
#include<math.h>

int isPrime(unsigned long int n) {
  for (unsigned long int i = 2; i <= (int) sqrt(n); i++)
	if (n % i == 0)
	  return 0;

  return 1;
}

int main() {
  int count = 0;
  unsigned long int number = 2;

  while (count < 10001) {
	if (isPrime(number)) count++;
	number++;
  }

  std::cout<<number - 1<<" is the 10001st prime number."<<std::endl;

  return 0;
}
