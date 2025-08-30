#include <stdio.h>

/* Khi b?n chia dý 1 s? cho s? nguyên N th? s? dý c?a phép chia ðó s? là các s? t? 0 t?i N - 1. Ví d? khi b?n chia cho 5 th? phép chia có s? dý có th? là 0, 1, 2, 3, 4. Bài toán này yêu c?u các b?n nh?p 2 s? a và b sau ðó t?m phép dý khi chia a cho b. */

int main() {
    int a, b;
    scanf("%d     %d", &a, &b);   
    printf("%d\n", a % b);
    return 0;
}

