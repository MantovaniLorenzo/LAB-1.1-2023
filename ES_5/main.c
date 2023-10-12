#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sol_x(const double a, const double b, const double c, const double d, const double e, const double f) {
	double det_c = (a * e) - (d * b);  // det matrice completa associata al sistema lineare
	double det_x = (c * e) - (f * b);  // det matrice ove la colonna dei termini della x (cioè la colonna i-esima) è sostituito dai termini noti

	double ris1 = det_x / det_c; // utilizza la formula di cramer- liebnitchz cioè  x = det x/ det c dove C è la matrice completa associata al sistema. 
	return ris1;
}

double sol_y(const double a, const double  b, const double  c, const double  d, const double  e, const double  f) {
	double det_c = (a * e) - (d * b); // det matrice completa associata al sistema lineare
	double det_y = (a * f) - (d * c); // det matrice ove la colonna dei termini della y (cioè la colonna i-esima) è sostituito dai termini noti

	double ris2 = det_y / det_c; // utilizza la formula di cramer- liebnitchz cioè  y = det y/ det c dove C è la matrice completa associata al sistema. 
	return ris2;
}



int main(void) {
	 float b2;
	 float a1;
	 float b1;
	 float c1;
	 float a2;
     float c2;
	double x;
	double y;


	printf("Inserisci il valore di a1 (float): ");
	scanf("%f", &a1);
	printf("Inserisci il valore di b1 (float):");
	scanf("%f", &b1);
	printf("Inserisci il valore di c1 (float):");
	scanf("%f", &c1);
	printf("Inserisci il valore di a2 (float):");
	scanf("%f", &a2);
	printf("Inserisci il valore di b2 (float):");
	scanf("%f", &b2);
	printf("Inserisci il valore di c2 (float):");
	scanf("%f", &c2);



	x = sol_x(a1, b1, c1, a2, b2, c2);
	y = sol_y(a1, b1, c1, a2, b2, c2);


	/*double det_c = (a1 * b2) - (a2 * b1);
	double det_x = (c1 * b2) - (c2 * b1);
	double det_y = (a1 * c2) - (a2 * c1);

	x = det_x / det_c;
	y = det_y / det_c; */


	printf("Le soluzioni del sistema sono x= %f e y= %f", x, y);

	return 0;
}