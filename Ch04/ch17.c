#include <stdio.h>

int main(void)
{
	int seven = 0x80;
	int fifteen = 0x8000;
	int twentythree = 0x800000;
	int thirtyone = 0x80000000;

	printf("7��° ��Ʈ�� 1�� �� : %08x %d\n", seven, seven);
	printf("15��° ��Ʈ�� 1�� �� : %08x %d\n", fifteen, fifteen);
	printf("23��° ��Ʈ�� 1�� �� : %08x %d\n", twentythree, twentythree);
	printf("31��° ��Ʈ�� 1�� �� : %08x %d\n", thirtyone, thirtyone);

	return 0;
}