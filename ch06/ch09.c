#include <stdio.h>

void dummy()
{
	int y = 456;	// 함수가 호출될 때마다 매번 다시 생성된다.
	printf("y = %d\n", y);
	y--;			// 감소된 y는 함수가 리턴할 때 소멸된다.
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