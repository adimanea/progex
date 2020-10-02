#include<iostream>

int main() {
  int s = 0, i;

  for (i = 1; i < 1000; i++)
	if ((i % 3 == 0) || (i % 5 == 0)) s += i;

  std::cout<<"The sum of all multiples of 3 and 5 below 1000 is "<<s<<std::endl;

  return 0;
}
