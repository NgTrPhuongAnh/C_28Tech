#include <stdio.h>

/* Cho 2 s? a v� b, nhi?m v? c?a b?n l� in ra s? l�?ng s? nguy�n t�nh t? a �?n b. */

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long res = b - a + 1;
    printf("%lld", res);

}

