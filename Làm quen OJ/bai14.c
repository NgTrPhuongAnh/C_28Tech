#include <stdio.h>

/* Cho 2 s? a và b, nhi?m v? c?a b?n là in ra s? lý?ng s? nguyên tính t? a ð?n b. */

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long res = b - a + 1;
    printf("%lld", res);

}

