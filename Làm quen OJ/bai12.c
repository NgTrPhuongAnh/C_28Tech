#include <stdio.h>

/* Cho F(x, y) = 5 * x + 2 * y + x * y, v?i x, y ��?c nh?p t? b�n ph�m h?y in ra k?t qu? c?a F(x, y). */

int main() {
    long long x, y;
    scanf("%lld %lld", &x, &y); 
	
	long long F = 5 * x + 2 * y + x * y;   
    printf("%lld", F);
     
    return 0;
}

