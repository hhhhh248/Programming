/*
���ϸ�: main.c
����: chap04-01 ���� - ������ �ӷ��� �Է¹޾� ������� ����ϴ� ���α׷�
�ۼ���: ������
��¥: 2025.04.09
���� vo.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMotionEnergy(double weight, double velocity);
int assignment0401(void);



int main(void)
{
	int r = assignment0401();

	return r;
}

/*
�Լ���: getMotionEnergy()
���(å��) :����, �ӷ� �Է¹޾� ��������� ����Ͽ� ��ȯ
�Է�: ����(kg), �ӷ�(m/s)
��ȯ: �������
*/

double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;

	energy = 1.0 / 2.0 * weight * velocity * velocity;




	return energy;

}

/*
�Լ���: assignment0401
���(å��) : ����, �ӷ��� �Է¹���. ��������� ����Ͽ� �Լ�ȣ��. �� ����� �ֿܼ� ���
�Է� : ����
��ȯ : �����̸� 0�̸� ����. �׿� ���� �����̴�
*/

int assignment0401(void)
{
	//1. ����, �ӵ� �Է¹޾� ����
	double weight = 0.0; // ���� kg
	double velocity = 0.0; //�ӷ� m/s

	printf("���� �ӵ��� �Է��ϼ���");
	scanf("%lf %lf", &weight, &velocity);
	//2. � ������ ���
	double result = getMotionEnergy(weight, velocity);


	//3. ���� ������� ���
	printf("����=%.2f kg,  �ӷ� %.2f m/s �� ��������� %.2f�Դϴ�", weight, velocity, result);

	return 0;
}