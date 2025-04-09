/*
파일명: main.c
내용: chap04-01 문제 - 질량과 속력을 입력받아 운동에너지 출력하는 프로그램
작성자: 김현서
날짜: 2025.04.09
버전 vo.1
*/

#include <stdio.h>

double getMotionEnergy(double weight, double velocity);
int assignment0401(void);



int main(void)
{
	int r = assignmert0401();

	return r;
}
/*
함수명: assignment0401
기능(책임) : 질량, 속략을 입력받음. 운동에너지를 계산하여 함수호출. 그 결과를 콘솔에 출력
입력 : 없음
반환 : 정수이며 0이면 성공. 그외 값은 에러이다
*/

int assignment0401(void)
{
	//1. 질량, 속도 입력받아 저장
	double weight = 0.0; // 질량 kg
	double velocity = 0.0; //속력 m/s
	scanf("%lf %lf", &weight, &velocity);
	printf("질량 속도를 입력하세요");
	//2. 운동 에너지 계산
	double result = getMotionEnergy(weight, velocity);


	//3. 계산된 운동에너지 출력
	printf("질량=%2.f kg,  속력 %.2f m/s 의 운동에너지는 %.2f입니다", weight, velocity, result);

	return 0;
}
/*
함수명: getMotionEnergy()
기능(책임) :질량, 속력 입력받아 운동에너지를 계산하여 반환
입력: 질량(kg), 속력(m/s)
반환: 운동에너지
*/

double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;

	energy + 1.0 / 2.0 * weight * velocity * velocity;




	return energy;

}