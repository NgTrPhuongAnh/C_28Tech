#include <stdio.h>

/* 28tech ði mua v?, anh ta có N ð?ng, m?i quy?n v? có giá X ð?ng. H?i anh ta mua ðý?c t?i ða bao nhiêu quy?n v? ? */

int main() {
    long long N;
	int X;
    scanf("%lld %d", &N, &X);
    
    long long res = N / X;
    printf("SO VO MUA DUOC LA : %lld !!!!!", res);

}
