#include <stdio.h>
#include <math.h>
#define PI 3.14

// Cho b�n k�nh R c?a h�nh tr�n. Y�u c?u t�nh chu vi v� di?n t�ch c?a h�nh tr�n d�. L?y PI = 3.1

int main () {
	int R;
	scanf("%d", &R);
	
	double S = PI * pow(R, 2);
	double P = PI * R * 2;
	printf("%.4lf %.4lf", P, S);
}
