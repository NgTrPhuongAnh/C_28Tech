#include <stdio.h>

/* Cho s? N, b?n h?y in ra s? N v?i 6 ch? s?, n?u N kh�ng �? 6 ch? s? th? ti?n h�nh ch�n 0 v� d?u # v�o �?u cho �? 6 ch? s?. */

int main() {
    int N;
    scanf("%d", &N);
	 
    printf("%06d\n", N);
    
    int tem = N, len = 0, i;
	if (tem == 0)
		len = 1; 
	while (tem > 0) {
		len++;
		tem /= 10; 
	} 
	for (i = 0; i < 6 - len; i++)
		printf("#");
	printf("%d\n", N); 

}
