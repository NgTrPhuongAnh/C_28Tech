#include <stdio.h>

/* Cho s? th?c F, nhi?m v? c?a b?n h?y in ra ph?n th?c và ph?n nguyên c?a F */
int main() {
    float F;
    scanf("%f", &F);
	 
    printf("%d\n", (int)F);
    printf("%.2f", F - (int)F); 

}
