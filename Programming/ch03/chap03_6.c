#include <stdio.h>

int main()

{
	double m = 0;

	printf("����Ʈ�� ����(��������)? ");
	scanf("%lf", &m);

	printf("%.2f: �������� = %.2f ��", m, m * 0.3025);

	return 0;

}