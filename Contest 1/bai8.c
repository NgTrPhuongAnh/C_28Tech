#include <stdio.h>

// Nh?p v�o 2 s? nguy�n, in ra t?ng, hi?u, t�ch, thuong(l?y d? ch�nh x�c v?i 4 ch? s?) c?a 2 s? d�.

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int tong = a + b;
	printf("%d", tong);
	
	int hieu = a - b;
	printf("\n%d", hieu);
	
	long long tich = 1ll * a * b;
	printf("\n%lld", tich);
	
	if (b != 0) {
		double thuong = 1.0 * a / b;
		printf("\n%.4lf", thuong);
	} else {
		printf("\nINVALID");
	}
	
}
