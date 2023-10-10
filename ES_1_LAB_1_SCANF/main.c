#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int area_rettangolo(const x, const y) {
	int ris = x * y;
	return ris;

}

int main(void) {


	int b;
	int h;
	int area;

	printf("Inserisci il valore di b: ");
	scanf("%d", &b);
	printf("Inserisci il valore di h: ");
	scanf("%d", &h);


	area = area_rettangolo(b, h);
	printf("L'area e' %d. \n", area);
	return 0;
}