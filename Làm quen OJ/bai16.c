#include <stdio.h>

/*Bài t?p này r?t ðõn gi?n, b?n ðý?c yêu c?u nh?p vào 4 s? x, y, z, t và in ra theo m?u.
D?ng 1 : In ra x, y, z, t m?i s? cách nhau 2 kho?ng tr?ng.
D?ng 2 in ra y, z, x, t m?i s? cách nhau 2 d?u g?ch gi?a.
D?ng 3 in ra 2 * x, 3 * y, 4 * z, 5 * t cách nhau 1 d?u ph?y.
D?ng 4 in ra "KET THUC !!".
Gi?a các d?ng có 1 d?ng tr?ng */

int main() {
    long long x, y, z, t;
    scanf("%lld %lld %lld %lld", &x, &y, &z, &t);
    
    printf("%lld %lld %lld %lld\n\n", x, y, z, t);
    printf("%lld--%lld--%lld--%lld\n\n", y, z, x, t);
    printf("%lld,%lld,%lld,%lld\n\n", x * 2, 3 * y, 4 * z, t * 5);
    printf("KET THUC !!"); 

}
