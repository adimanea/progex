#include<stdio.h>

int main() {
  FILE *fp;
  char c;
  int x;

  fp = fopen("small", "r");
  if (fp == NULL) return 0;

  fscanf(fp, "%d", &x);
  while (!feof(fp)) {
	printf("%d\n", x);
	fscanf(fp, "%d", &x);
  }
  
  fclose(fp);
  
  return 0;
}

  
