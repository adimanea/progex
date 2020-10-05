#include<iostream>

int isPyth(int a, int b, int c) {
  return ((a * a + b * b == c * c) ||
		  (a * a + c * c == b * b) ||
		  (b * b + c * c == a * a));
}

int main() {

  for (int x = 1; x <= 1000; x++)
	for (int y = 1; y <= 1000; y++)
	  for (int z = 1; z <= 1000; z++)
		if (isPyth(x, y, z) && (x + y + z == 1000)) {
		  std::cout<<(x * y * z)<<" is the product of the Pythagorean triple with sum 1000."<<std::endl;
		  std::cout<<"This is made of: ("<<x<<", "<<y<<", "<<z<<")."<<std::endl;
		  return 0;
		}
}
