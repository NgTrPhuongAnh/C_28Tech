#include<stdio.h>
#include<math.h> 

/* Cho s? nguy�n d��ng N, nhi?m v? c?a b?n l� t�nh c�n b?c 2 v� c�n b?c 3 c?a N.*/

int main() { 
	int N;
	scanf("%d", &N); 
	 
	double sqrt_N = sqrt(N);
	double cbrt_N = cbrt(N);
	
	printf("%.2f\n", sqrt_N);
	printf("%.3f", cbrt_N); 
	
	return 0; 
}
