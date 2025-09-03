#include <stdio.h>

// Cho 2 s? nguyên a và b. B?n hãy tìm 2 s? sau, s? th? 1 là s? l?n nh?t <= a mà chia h?t cho b, s? th? 2 là s? nh? nh?t >=a mà chia h?t cho b. Chú ý các b?n không du?c dùng vòng l?p.

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int res1 = a / b * b;
	int res2 = (a / b + 1) * b;
	
	printf("%d %d", res1, res2);
}
