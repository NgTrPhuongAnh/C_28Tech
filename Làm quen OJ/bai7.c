#include <stdio.h>
#include <math.h>

/* Cho nguy�n d��ng N, b?n h?y s? d?ng ph�p chia d� �? l?y ra ch? s? cu?i c�ng v� 2 ch? s? cu?i c�ng c?a N. */

int main() {
    long long N;
    scanf("%lld", &N);

    long long last1 = N % 10;
	long long last2 = N % 100; 

    printf("%lld\n", last1);
    printf("%lld", last2);

}
