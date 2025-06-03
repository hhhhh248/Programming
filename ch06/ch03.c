#include <stdio.h>

void print_sum(int count)
{
	int i;
	int num;
	int sum = 0;

	printf("%d개의 정수? ", count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &num);
		sum += num;
	}
	printf("합계 : %d\n", sum);
}

int main(void)
{
	int i;

	for (i = 3; i < 10; i += 2)
	{
		print_sum(i);
	}

	return 0;
}