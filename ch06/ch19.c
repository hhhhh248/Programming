#include <stdio.h>



void graph(int rnum) {
	int i;

	for (i = 0; i < rnum / 100; i++) {
		printf("*");
	}
}

void pa06_19() {
	int i, rnum;
	srand((unsigned int)time(NULL));

	for (i = 0; i < 3; i++) {
		rnum = rand() % 10000;
		printf("%d:", rnum);
		graph(rnum);
		printf("\n");
	}

}