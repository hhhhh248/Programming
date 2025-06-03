#include <stdio.h>Add commentMore actions


int main(void)
{
	int score;

	printf("퀴즈 점수를 입력하세요: ");
	scanf("%d", &score);

	if (score < 70)
		printf("재시!!!\n"); // score < 70인 경우에 수행된다.

	printf("다음 수업은 일주일 후입니다.\n");

	return 0;
}