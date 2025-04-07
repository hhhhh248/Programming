#include <stdio.h>

int main()
{
	double m = 0;
	double e = 0;

	printf("USD? ");
	scanf("lf", &m);

	printf("원/달러 환율? ");
	scanf("lf", &e);

	printf("USD %.2f = KRW %.2f", m, m * e);
	/*
	달러 -> 원화
	달러 금액 * 환율 = 원화 환전액
	*/
}
