#include <stdio.h>

int min()

{

unsigned int red, green, blue, rgb;

	printf("red?");
	scanf_s("%d", &red);
	printf("green?");
	scanf_s("%d", &green);
	printf("blue?");
	scanf_s("%d", &blue);
	if (red > 255) red = 0x0000;
	if (green > 255) green = 0x0000;
	if (blue > 255) blue = 0x0000;

	rgb = red | green << 8 | blue << 16;

	printf("RGB 트루컬러 : %06X", rgb);

	return 0;
}