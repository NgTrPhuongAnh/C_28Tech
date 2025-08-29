#include<stdio.h>
#include<math.h> 

/* Cho s? nguyên dýõng N, nhi?m v? c?a b?n là tính cãn b?c 2 và cãn b?c 3 c?a N.*/

int main() { 
	int N;
	scanf("%d", &N); 
	 
	double sqrt_N = sqrt(N);
	double cbrt_N = cbrt(N);
	
	printf("%.2f\n", sqrt_N);
	printf("%.3f", cbrt_N); 
	
	return 0; 
}
