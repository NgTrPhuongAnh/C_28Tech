#include <stdio.h>
#include <math.h>

/* Hàm ceil : làm tr?n lên s? nguyên g?n nh?t, floor : làm tr?n xu?ng s? nguyên g?n nh?t, round : làm tr?n s? nguyên ph? thu?c vào ph?n th?p phân.
Cho s? th?c X nhi?m v? c?a b?n là s? d?ng 3 hàm trên ð? t?m s? nguyên nh? hõn g?n X nh?t, s? nguyên l?n hõn g?n X nh?t, s? nguyên g?n X nh?t. */

int main() {
    double X;
    scanf("%lf", &X);

    long long smaller = (long long) floor(X);   
    long long greater = (long long) ceil(X);    
    long long nearest = (long long) round(X);  

    printf("%lld\n", smaller);
    printf("%lld\n", greater);
    printf("%lld\n", nearest);

}
