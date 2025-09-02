#include <stdio.h>
#include <math.h>

// Cho bi?u th?c A(x) = x^3 + 3x^2 + x + 1 V?i giá tr? c?a x du?c nh?p t? bàn phím, tính và in ra giá tr? c?a bi?u th?c trên

int main () {
	int x;
	scanf("%d", &x);
	
	long long res = 1ll * pow(x, 3) + 3 * pow(x, 2) + x + 1;
	printf("%lld", res);
}
