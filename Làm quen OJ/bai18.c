#include <stdio.h>

/* Cho 2 s? nguyên a, b b?n h?y hoán ð?i giá tr? 2 s? a và b sau ðó tính giá tr? bi?u th?c 128 * a + 97 * b + 1000 in ra màn h?nh. Ð? hoán ð?i giá tr? a, b b?n có th? dùng swap(a, b) ho?c dùng bi?n t?m nhý sau : int tmp = a; a = b; b = tmp; */

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    
    long long c = a;
	a = b; 
	b = c;
	 
    printf("%lld", 128 * a + 97 * b + 1000);

}
