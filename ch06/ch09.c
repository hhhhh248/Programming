#include <stdio.h>

void dummy()
{
	int y = 456;	// �Լ��� ȣ��� ������ �Ź� �ٽ� �����ȴ�.
	printf("y = %d\n", y);
	y--;			// ���ҵ� y�� �Լ��� ������ �� �Ҹ�ȴ�.
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
		dummy();
	for (i = 0; i < 3; i++)
	{
		int x = 123;
		printf("x = %d\n", x);
		x++;
	}
}