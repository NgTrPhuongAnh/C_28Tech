#include <stdio.h>

/* Cho 2 s? nguy�n a, b b?n h?y ho�n �?i gi� tr? 2 s? a v� b sau �� t�nh gi� tr? bi?u th?c 128 * a + 97 * b + 1000 in ra m�n h?nh. �? ho�n �?i gi� tr? a, b b?n c� th? d�ng swap(a, b) ho?c d�ng bi?n t?m nh� sau : int tmp = a; a = b; b = tmp; */

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    
    long long c = a;
	a = b; 
	b = c;
	 
    printf("%lld", 128 * a + 97 * b + 1000);

}
