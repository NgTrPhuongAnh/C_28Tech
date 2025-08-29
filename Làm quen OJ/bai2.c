#include<stdio.h>

/*Ð? bài yêu c?u b?n nh?p :
D?ng 1 là s? nguyên X
D?ng 2 là s? nguyên Y
D?ng 3 là kí t? C
D?ng 4 là s? th?c float F
D?ng 5 là s? th?c double D.
Nhi?m v? c?a b?n là in ra 5 d?ng. D?ng 1 in X, d?ng 2 in Y, d?ng 3 in C, d?ng 4 in F v?i 2 s? ð?ng sau d?u ph?y, d?ng 5 in D v?i 9 s? sau d?u ph?y. */

int main(){
	int X;
	long long Y;
	char C;
	float F;
	double D;
	 
	scanf("%d %lld %c %f %lf", &X, &Y, &C, &F, &D);
	
	printf("%d", X);
	printf("\n%lld", Y);
	printf("\n%c", C);
	printf("\n%.2f", F);
	printf("\n%.9lf", D);
}
