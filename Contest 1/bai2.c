#include <stdio.h>

// Cho ba s? nguy�n a , b v� c, h�y t�nh S = a(b+c)+b(a+c).

int main () {
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	
	long long res = a * (b + c) + b * (a + c);
	printf("%lld", res);
}
