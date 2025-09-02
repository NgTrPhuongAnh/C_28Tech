#include <stdio.h>
#include <math.h>
#define PI 3.14

// Cho bán kính R c?a hình tròn. Yêu c?u tính chu vi và di?n tích c?a hình tròn dó. L?y PI = 3.1

int main () {
	int R;
	scanf("%d", &R);
	
	double S = PI * pow(R, 2);
	double P = PI * R * 2;
	printf("%.4lf %.4lf", P, S);
}
