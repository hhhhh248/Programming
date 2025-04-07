#include <stdio.h>

int main()
{
	double n = 0;
	double m = 0;

	printf("힘(N)?");
	scanf("%lf", &n);
	printf("이동거리(m)?");
	scanf("%lf", &m);

	printf("일의 양: %.2f J", n * m);

	return 0;
		

}
