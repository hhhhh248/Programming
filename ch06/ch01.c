#include <stdio.h>

void main(void)
{
	printf("Hi! Let's enjoy C programming.\n");
}

void bye() { printf("Bye!\n"); }


int main(void)
{
	hi();
	bye();

	hi();
	bye();

	return 0;
}