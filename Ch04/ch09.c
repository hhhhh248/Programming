#include <stdio.h>

int main(void)
{
	int time, hour, minute, second;

	printf("����ð�(��) ?");
	scanf_s("%d", &time);
	second = time % 60; // �� ������ 60���� ���� ������ ���� ��
	time = time / 60; // �ð� ���ϱ� ���� ���
	hour = time / 60; // 60�� �̻��� ��� ������ ���� ������ �����̸� ���� �Ҽ����̶� ������ ����
	minute = time % 60; // �ð��� ���ϰ� ������ ���� ���� ��

	printf("����ð��� %d�ð� %d�� %d���Դϴ�.", hour, minute, second);

	return 0;
}
