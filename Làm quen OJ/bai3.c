#include<stdio.h>

/* Cho 4 s? X, Y, Z, T l� s? nguy�n du?c nh?p t? b�n ph�m.
B?n h�y in ra 3 d�ng
D�ng 1 l?n lu?t 4 s? Y,Z,X,T m?i s? c�ch nhau m?t d?u ph?y
D�ng 2 in ra t?ng 4 s?
D�ng 3 in ra gi� tr? c?a bi?u th? X - Y + Z * T.
(Ch� � gi� tr? c?a t�ch Z * T v� gi� tr? c?a t?ng 4 s? c� th? tr�n ki?u d? li?u int) */

int main() { 
	long long X, Y, Z, T; 
	scanf("%lld%lld%lld%lld", &X, &Y, &Z, &T); 
	
	printf("%lld,%lld,%lld,%lld\n", X, Y, Z, T); 
	printf("%lld\n", X + Y + Z + T); 
	printf("%lld\n", X - Y + Z * T); 
}
