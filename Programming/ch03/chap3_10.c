#include <stdio.h>

int main()
{
	double m = 0;
	double e = 0;

	printf("USD? ");
	scanf("lf", &m);

	printf("��/�޷� ȯ��? ");
	scanf("lf", &e);

	printf("USD %.2f = KRW %.2f", m, m * e);
	/*
	�޷� -> ��ȭ
	�޷� �ݾ� * ȯ�� = ��ȭ ȯ����
	*/
}
