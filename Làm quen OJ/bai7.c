#include <stdio.h>
#include <math.h>

/* Cho nguyên dýõng N, b?n h?y s? d?ng phép chia dý ð? l?y ra ch? s? cu?i cùng và 2 ch? s? cu?i cùng c?a N. */

int main() {
    long long N;
    scanf("%lld", &N);

    long long last1 = N % 10;
	long long last2 = N % 100; 

    printf("%lld\n", last1);
    printf("%lld", last2);

}
