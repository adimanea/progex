#include<stdio.h>

int main() {
  FILE *fp;
  int numbers[100][50], i, j, result[50], sum = 0, carry;
  char c;

  fp = fopen("numbers", "r");
  if (fp == NULL) return 0;

  while ((c = fgetc(fp)) != EOF)
	if (c != '\n') {
	  /* every time column number exceeds 50,
		 reset column number (%) and increase line number */
	  numbers[(int) j / 50][j % 50] = c - '0';
	  j++;
	}

  fclose(fp);

  /* treat separately the last digit */
  for (i = 0; i < 100; i++)	sum += numbers[i][49];
  carry = (int) sum / 10;
  result[49] = sum % 10;

  /* for the rest of the digits (except the first one) */
  for (j = 48; j > 0; j--) {
	sum = 0;
	for (i = 0; i < 100; i++) sum += numbers[i][j];
	carry = (int) (sum + carry) / 10;
	result[j] = (sum + carry) % 10;
  }

  /* for the first digit (no more carry) */
  sum = 0;
  for (i = 0; i < 100; i++)	sum += numbers[i][0];
  carry = (int) (sum + carry) / 10;
  result[0] = sum + carry;

  /* print the first 10 digits */
  for (i = 0; i < 10; i++) printf("%d", result[i]);
  /* 5537376230 */

  printf("...\n");

  return 0;
}
