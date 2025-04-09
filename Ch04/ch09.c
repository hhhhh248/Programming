#include <stdio.h>

int main(void)
{
	int time, hour, minute, second;

	printf("재생시간(초) ?");
	scanf_s("%d", &time);
	second = time % 60; // 초 단위를 60으로 나눈 나머지 값은 초
	time = time / 60; // 시간 구하기 위한 계산
	hour = time / 60; // 60분 이상일 경우 정수로 값이 나오고 이하이면 값이 소수점이라 나오지 않음
	minute = time % 60; // 시간을 구하고 나머지 값이 분이 됨

	printf("재생시간은 %d시간 %d분 %d초입니다.", hour, minute, second);

	return 0;
}
