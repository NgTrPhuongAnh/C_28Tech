#include<stdio.h>
#include<math.h> 

/* Cho 2 s? x, y. Nhi?m v? c?a b?n là tính x ^ y */

int main() { 
	int x, y; 
	scanf("%d %d", &x, &y); 
	
	long long pow_xy = (long long) pow(x, y); 
	printf("%lld", pow_xy); 
}
