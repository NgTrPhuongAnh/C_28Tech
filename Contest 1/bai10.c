#include <stdio.h>

// Cho 3 c?nh a, b, c là d? dài 3 c?nh c?a tam giác, ki?m tra xem a, b, c có th? t?o thành m?t tam giác h?p l? hay không?

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	 
	if (a + b > c && a + c > b && b + c > a) {
		printf("YES");
	} else {
		printf("NO");
	}
}
