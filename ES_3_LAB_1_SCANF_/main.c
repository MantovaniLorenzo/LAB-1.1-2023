#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double distanza(const double a, const double b, const double c, const double d) {
	double ris = (a - c) * (a - c) + (b - d) * (b - d);
	return ris;
}

int main(void) {
	const double x1 ;
	const double y1 ;
	const double x2 ;
	const double y2 ;
	double square_dist;

	printf("Inserisci il valore di X1: ");
	scanf("%d", &x1);
	printf("Inserisci il valore di Y1: ");
	scanf("%d", &y1);
	printf("Inserisci il valore di X2: ");
	scanf("%d", &x2);
	printf("Inserisci il valore di Y2: ");
	scanf("%d", &y2);

	square_dist = distanza(x1, y1, x2, y2);
	printf("La distanza quadrata euclidea dei punti e' %f", square_dist);
	return 0;
}