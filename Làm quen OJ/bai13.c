#include <stdio.h> 

/* Cho s? nguy�n d��ng N c� �t nh?t 5 ch? s?, nhi?m v? c?a b?n l� x�a �i 3 ch? s? cu?i c�ng c?a N v� in ra nh?ng ch? s? c?n l?i. */

int main() {
    int x, y, z, t;
    scanf("%d %d %d %d", &x, &y, &z, &t); 
    
    int max_xy = x > y ? x : y;
    printf("%d\n", max_xy);
	 
	int min_zt = z < t ? z : t;
	printf("%d\n", min_zt);
	 
	int max_xyz = z > max_xy ? z : max_xy;
	printf("%d\n", max_xyz);
	 
	int min_xy = x < y ? x : y; 
	int min_xyzt =  (min_xy < min_zt) ? min_xy : min_zt; 
	printf("%d", min_xyzt); 
} 
