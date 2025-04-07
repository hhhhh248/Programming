#include <stdio.h>

int main()
{
	double n = 0;

	printf("½Ç¼ö? ");
	scanf("lf", &n);

	printf("Á¦°ö: %e/n", n * n);
	printf("¼¼Á¦°ö: %e", n * n * n);

	return 0;
}
