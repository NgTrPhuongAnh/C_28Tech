#include <stdio.h>

// Vi?t chuong trình C cho phép nh?p vào nhi?t d? do theo d? C là s? nguyên duong không quá 10^6, th?c hi?n chuy?n sang don v? do d? F và in ra màn hình. In ra k?t qu? v?i 2 ch? s? sau d?u ph?y th?p phân

int main () {
	int C;
	scanf("%d", &C);
	
	float F = 1.0 * C * 9 / 5 + 32;
	printf("%.2f", F);
}
