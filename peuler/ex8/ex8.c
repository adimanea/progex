#include<stdio.h>

int main() {
  int number[1000], i = 0, j;
  unsigned long long int maxProd = 0, product = 1;
  char c;
  FILE *fp;

  fp = fopen("number", "r");

  if (fp == NULL) return 0;

  while ((c = fgetc(fp)) != EOF)
	if ((c != '\n') && (c != '\0') && (c != '\r')) {
	  number[i] = c - '0';
	  i++;
	}

  for (i = 0; i < 1000 - 13; i++) {
	product = 1;
	for (j = i; j < i + 13; j++)
	  product *= number[j];
	if (maxProd < product) maxProd = product;
  }

  printf("%llu is the largest product of 13-adjacent digits.\n", maxProd);

  fclose(fp);

  return 0;
}
