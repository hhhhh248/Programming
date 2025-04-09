#include <stdio.h>

int main(void)

{
	float F;

	printf("È­¾¾¿Âµµ?");

	scanf_s("%f", &F);

	printf("%.2f F = %.2f C", F, (F - 32) * 5 / 9);

	return 0;
}