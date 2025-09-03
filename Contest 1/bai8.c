#include <stdio.h>

// Nh?p vào 2 s? nguyên, in ra t?ng, hi?u, tích, thuong(l?y d? chính xác v?i 4 ch? s?) c?a 2 s? dó.

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
