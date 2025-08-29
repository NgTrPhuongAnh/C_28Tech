#include<stdio.h>

/* Cho 4 s? X, Y, Z, T là s? nguyên du?c nh?p t? bàn phím.
B?n hãy in ra 3 dòng
Dòng 1 l?n lu?t 4 s? Y,Z,X,T m?i s? cách nhau m?t d?u ph?y
Dòng 2 in ra t?ng 4 s?
Dòng 3 in ra giá tr? c?a bi?u th? X - Y + Z * T.
(Chú ý giá tr? c?a tích Z * T và giá tr? c?a t?ng 4 s? có th? tràn ki?u d? li?u int) */

int main() { 
	long long X, Y, Z, T; 
	scanf("%lld%lld%lld%lld", &X, &Y, &Z, &T); 
	
	printf("%lld,%lld,%lld,%lld\n", X, Y, Z, T); 
	printf("%lld\n", X + Y + Z + T); 
	printf("%lld\n", X - Y + Z * T); 
}
