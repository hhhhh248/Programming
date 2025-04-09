#include <stdio.h>

int main()

{
	int x = 0;
	int y = 0;

	printf("가로의 길이? ");
	scanf("%d", &x);

	printf("세로의 길이? ");
	scanf("%d", y);

	printf("직사각형의 넓이: %d/n", x * y);
	printf("직사각형의 둘레: %d", (x + y) * 2);

	return 0;

}


