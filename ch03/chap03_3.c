#include <stdio.h>

int main()

{
	int k = 0;
	int m = 0;

	printf("����(kg)?");
	scanf("%d", &k);
	printf("����(m)?");
	scanf("%d", &m);

	printf("��ġ������: %f J", 9.8 * k * m);

	return 0;
}