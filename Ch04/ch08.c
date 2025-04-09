#include <stdio.h>

int main(void)
{
	int r;
	double pie = 3.141592;

	printf("반지름의 길이 ?");
	scanf_s("%d", &r);
	printf("구의 부피: %.6lf ", 4 / 3 * pie * pow(r, 3));

	return 0;
}