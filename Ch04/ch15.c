#include <stdio.h>

int main(void)
{
	double do_price, ex_ra;
	float buy_usd;

	printf("��/�޷� �Ÿű����� ?");
	scanf_s("%lf", &do_price);
	printf("ȯ�������(0~100%) ?");
	scanf_s("%lf", &ex_ra);
	do_price = do_price + (do_price * 0.0175 * (1 - ex_ra / 100));
	printf("�޷� �� �� ȯ���� %.6lf�Դϴ�.\n", do_price);
	printf("������ �޷�(USD) ?");
	scanf_s("%f", &buy_usd);
	printf("USD %.2f �� �� ==> KRW %.2f", buy_usd, do_price * buy_usd);

	return 0;
}