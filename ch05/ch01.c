#include <stdio.h>Add commentMore actions


int main(void)
{
	int score;

	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &score);

	if (score < 70)
		printf("���!!!\n"); // score < 70�� ��쿡 ����ȴ�.

	printf("���� ������ ������ ���Դϴ�.\n");

	return 0;
}