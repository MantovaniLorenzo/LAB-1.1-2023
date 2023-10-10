#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ris_area(x,  y) {
	double ris = ((double)x * y) / 2;
	return ris;
}

int main(void) {
	int b;
	int h;
	double area;

	printf("Inserisci il valore di b: ");
	scanf("%d", &b);
	printf("Inserisci il valore di h: ");
	scanf("%d", &h);

	area = ris_area(b, h);
	printf("L'area e' %f", area);
	return 0;
}