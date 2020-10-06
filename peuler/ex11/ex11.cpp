#include<iostream>

int main() {
  unsigned long int product = 1, maxProdLine = 0, maxProdDiag = 0;
  int numsList[400], numsMat[20][20], i, j, k, x,
	factorsLine[4], factorsDiag[4], maxLine = 0, maxDiag = 0;
  FILE *fp;
  char c;

  fp = fopen("grid", "r");
  if (fp == NULL) return 0;

  /* initialize the list and matrix */
  for (i = 0; i < 20; i++)
	for (j = 0; j < 20; j++)
	  numsMat[i][j] = 0;
  for (i = 0; i < 400; i++)
	numsList[i] = 0;

  for (i = 0; i < 4; i++)
	factorsLine[i] = factorsDiag[i] = 0;

  i = 0;

  /* read file contents in a list */
  fscanf(fp, "%d", &x);
  while (!feof(fp)) {
	numsList[i++] = x;
	fscanf(fp, "%d", &x);
  }

  fclose(fp);

  /* convert the list to a matrix */
  k = 0;
  for (i = 0; i < 20; i++)
	for (j = 0; j < 20; j++)
	  numsMat[i][j] = numsList[k++];

  /* compute the maximum product on a line */
  for (i = 0; i < 20; i++)
	for (j = 0; j < 20; j++) {
	  product = 1;
	  if (j < 16) {
		product *= numsMat[i][j] * numsMat[i][j+1] * numsMat[i][j+2] * numsMat[i][j+3];
		if (maxProdLine < product) {
		  maxProdLine = product;
		  factorsLine[0] = numsMat[i][j];
		  factorsLine[1] = numsMat[i][j+1];
		  factorsLine[2] = numsMat[i][j+2];
		  factorsLine[3] = numsMat[i][j+3];
		  maxLine = i;
		}
	  }
	}
  
  /* compute the maximum product on a diagonal */
  for (i = 0; i < 20; i++)
	for (j = 0; j < 20; j++) {
	  product = 1;
	  if (i + j < 17) {
		product *= numsMat[i][j] * numsMat[i+1][j+1] * numsMat[i+2][j+2] * numsMat[i+3][j+3];
		if (maxProdDiag < product) {
		  maxProdDiag = product;
		  factorsDiag[0] = numsMat[i][j];
		  factorsDiag[1] = numsMat[i+1][j+1];
		  factorsDiag[2] = numsMat[i+2][j+2];
		  factorsDiag[3] = numsMat[i+3][j+3];
		  maxDiag = i;
		}
	  }
	}

  /* see which one is bigger */
  if (maxProdDiag >= maxProdLine) {
	printf("%ul is the biggest product, obtained on a diagonal.\n", maxProdDiag);
	printf("It is obtained from line %d\n", maxLine);
	printf("Namely from %d, %d, %d, %d\n", factorsLine[0], factorsLine[1], factorsLine[2], factorsLine[3]);
  }
  else {
	printf("%ul is the biggest product, obtained on a line.\n", maxProdLine);
	printf("It is obtained starting on line %d\n", maxDiag);
	printf("Namely from elements %d, %d, %d, %d\n", factorsDiag[0], factorsDiag[1], factorsDiag[2], factorsDiag[3]);
  }
  
  return 0;
}
