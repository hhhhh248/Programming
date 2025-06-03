#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisiors(int rnum) {
	int i, cnt = 0;
	printf("%d의 약수: ", rnum);

	for (i = 1; i <= rnum; i++) {

		if (rnum % i == 0) {
			cnt++;
			printf("%d ", i);
		}
	}
	printf("=> 총 %d개\n", cnt);
}


void main() {
	int i, j, cnt = 0;

	srand((unsigned int)time(NULL));

	for (i = 0; i < 3; i++) {
		int rnum = rand() % 1000;
		divisiors(rnum);
	}
}