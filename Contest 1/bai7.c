#include <stdio.h>

// Cho 2 s? nguy�n a v� b. B?n h�y t�m 2 s? sau, s? th? 1 l� s? l?n nh?t <= a m� chia h?t cho b, s? th? 2 l� s? nh? nh?t >=a m� chia h?t cho b. Ch� � c�c b?n kh�ng du?c d�ng v�ng l?p.

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int res1 = a / b * b;
	int res2 = (a / b + 1) * b;
	
	printf("%d %d", res1, res2);
}
