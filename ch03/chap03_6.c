#include <stdio.h>

int main()

{
	double m = 0;

	printf("아파트의 면적(제곱미터)? ");
	scanf("%lf", &m);

	printf("%.2f: 제곱미터 = %.2f 평", m, m * 0.3025);

	return 0;

}