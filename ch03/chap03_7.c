#include <stdio.h>

int main()
{
	double n = 0;

	printf("�Ǽ�? ");
	scanf("lf", &n);

	printf("����: %e/n", n * n);
	printf("������: %e", n * n * n);

	return 0;
}
