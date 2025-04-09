#include <stdio.h>

int main(void)
{
	int seven = 0x80;
	int fifteen = 0x8000;
	int twentythree = 0x800000;
	int thirtyone = 0x80000000;

	printf("7번째 비트만 1인 값 : %08x %d\n", seven, seven);
	printf("15번째 비트만 1인 값 : %08x %d\n", fifteen, fifteen);
	printf("23번째 비트만 1인 값 : %08x %d\n", twentythree, twentythree);
	printf("31번째 비트만 1인 값 : %08x %d\n", thirtyone, thirtyone);

	return 0;
}