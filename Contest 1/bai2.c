#include <stdio.h>

// Cho ba s? nguyên a , b và c, hãy tính S = a(b+c)+b(a+c).

int main () {
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	
	long long res = a * (b + c) + b * (a + c);
	printf("%lld", res);
}
