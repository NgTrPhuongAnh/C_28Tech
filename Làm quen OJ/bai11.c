#include <stdio.h>

/* Khi b?n chia d� 1 s? cho s? nguy�n N th? s? d� c?a ph�p chia �� s? l� c�c s? t? 0 t?i N - 1. V� d? khi b?n chia cho 5 th? ph�p chia c� s? d� c� th? l� 0, 1, 2, 3, 4. B�i to�n n�y y�u c?u c�c b?n nh?p 2 s? a v� b sau �� t?m ph�p d� khi chia a cho b. */

int main() {
    int N;
    scanf("%d", &N); 
	  
    printf("%d\n", N * 2);
    printf("%lld\n", N * 1ll * 10);
	printf("%d\n", N / 2);
	printf("%.3f", 1.0 * N / 2); 
    return 0;
}

