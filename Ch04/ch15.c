#include <stdio.h>

int main(void)
{
	double do_price, ex_ra;
	float buy_usd;

	printf("원/달러 매매기준율 ?");
	scanf_s("%lf", &do_price);
	printf("환율우대율(0~100%) ?");
	scanf_s("%lf", &ex_ra);
	do_price = do_price + (do_price * 0.0175 * (1 - ex_ra / 100));
	printf("달러 살 때 환율은 %.6lf입니다.\n", do_price);
	printf("구입할 달러(USD) ?");
	scanf_s("%f", &buy_usd);
	printf("USD %.2f 살 때 ==> KRW %.2f", buy_usd, do_price * buy_usd);

	return 0;
}