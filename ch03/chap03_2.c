#include <stdio.h>

int main()

{
	int x = 0;
	int y = 0;

	printf("������ ����? ");
	scanf("%d", &x);

	printf("������ ����? ");
	scanf("%d", y);

	printf("���簢���� ����: %d/n", x * y);
	printf("���簢���� �ѷ�: %d", (x + y) * 2);

	return 0;

}


