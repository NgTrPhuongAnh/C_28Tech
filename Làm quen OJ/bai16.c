#include <stdio.h>

/*B�i t?p n�y r?t ��n gi?n, b?n ��?c y�u c?u nh?p v�o 4 s? x, y, z, t v� in ra theo m?u.
D?ng 1 : In ra x, y, z, t m?i s? c�ch nhau 2 kho?ng tr?ng.
D?ng 2 in ra y, z, x, t m?i s? c�ch nhau 2 d?u g?ch gi?a.
D?ng 3 in ra 2 * x, 3 * y, 4 * z, 5 * t c�ch nhau 1 d?u ph?y.
D?ng 4 in ra "KET THUC !!".
Gi?a c�c d?ng c� 1 d?ng tr?ng */

int main() {
    long long x, y, z, t;
    scanf("%lld %lld %lld %lld", &x, &y, &z, &t);
    
    printf("%lld %lld %lld %lld\n\n", x, y, z, t);
    printf("%lld--%lld--%lld--%lld\n\n", y, z, x, t);
    printf("%lld,%lld,%lld,%lld\n\n", x * 2, 3 * y, 4 * z, t * 5);
    printf("KET THUC !!"); 

}
