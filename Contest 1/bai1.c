#include <stdio.h>
#include <math.h>

// Cho bi?u th?c A(x) = x^3 + 3x^2 + x + 1 V?i gi� tr? c?a x du?c nh?p t? b�n ph�m, t�nh v� in ra gi� tr? c?a bi?u th?c tr�n

int main () {
	int x;
	scanf("%d", &x);
	
	long long res = 1ll * pow(x, 3) + 3 * pow(x, 2) + x + 1;
	printf("%lld", res);
}
