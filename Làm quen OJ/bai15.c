#include <stdio.h>

/* 28tech �i mua v?, anh ta c� N �?ng, m?i quy?n v? c� gi� X �?ng. H?i anh ta mua ��?c t?i �a bao nhi�u quy?n v? ? */

int main() {
    long long N;
	int X;
    scanf("%lld %d", &N, &X);
    
    long long res = N / X;
    printf("SO VO MUA DUOC LA : %lld !!!!!", res);

}
