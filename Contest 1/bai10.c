#include <stdio.h>

// Cho 3 c?nh a, b, c l� d? d�i 3 c?nh c?a tam gi�c, ki?m tra xem a, b, c c� th? t?o th�nh m?t tam gi�c h?p l? hay kh�ng?

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	 
	if (a + b > c && a + c > b && b + c > a) {
		printf("YES");
	} else {
		printf("NO");
	}
}
