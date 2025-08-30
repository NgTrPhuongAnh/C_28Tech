#include <stdio.h>
#include <math.h>

/* H�m ceil : l�m tr?n l�n s? nguy�n g?n nh?t, floor : l�m tr?n xu?ng s? nguy�n g?n nh?t, round : l�m tr?n s? nguy�n ph? thu?c v�o ph?n th?p ph�n.
Cho s? th?c X nhi?m v? c?a b?n l� s? d?ng 3 h�m tr�n �? t?m s? nguy�n nh? h�n g?n X nh?t, s? nguy�n l?n h�n g?n X nh?t, s? nguy�n g?n X nh?t. */

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
