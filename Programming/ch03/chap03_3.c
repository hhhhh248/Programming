#include <stdio.h>

int main()

{
	int k = 0;
	int m = 0;

	printf("질량(kg)?");
	scanf("%d", &k);
	printf("높이(m)?");
	scanf("%d", &m);

	printf("위치에너지: %f J", 9.8 * k * m);

	return 0;
}