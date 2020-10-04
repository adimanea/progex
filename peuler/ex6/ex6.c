#include<stdio.h>

unsigned long int sumSq(int start, int fin) {
  unsigned long int sum = 0;

  for (int i = start; i <= fin; i++)
	sum += i*i;

  return sum;
}

unsigned long int sqSum(int start, int fin) {
  unsigned long int sum = 0;

  for (int i = start; i <= fin; i++)
	sum += i;

  return (sum * sum);
}

int main() {

  printf("%lu is the difference between sumSq(1..100) and sqSum(1..100).\n",
		 sqSum(1,100) - sumSq(1,100));

  return 0;
}
