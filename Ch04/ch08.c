#include <stdio.h>

int main(void)
{
	int r;
	double pie = 3.141592;

	printf("�������� ���� ?");
	scanf_s("%d", &r);
	printf("���� ����: %.6lf ", 4 / 3 * pie * pow(r, 3));

	return 0;
}