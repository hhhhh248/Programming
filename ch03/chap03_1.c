#include <stdio.h>
int main()
{
	int l = 0;
	printf("한 변의 길이?"); // l=5

	scanf("%d", &l);

	printf("정사각형의 넓이: %d/n", l * l);
	printf("정사각형의 둘레: %d", l * 4);

	return 0;

}