#include <stdio.h>

// Vi?t chuong tr�nh C cho ph�p nh?p v�o nhi?t d? do theo d? C l� s? nguy�n duong kh�ng qu� 10^6, th?c hi?n chuy?n sang don v? do d? F v� in ra m�n h�nh. In ra k?t qu? v?i 2 ch? s? sau d?u ph?y th?p ph�n

int main () {
	int C;
	scanf("%d", &C);
	
	float F = 1.0 * C * 9 / 5 + 32;
	printf("%.2f", F);
}
