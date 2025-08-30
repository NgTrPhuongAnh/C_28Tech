#include <stdio.h>

/* Cho nguyên dýõng N, b?n h?y s? d?ng phép chia dý ð? l?y ra ch? s? cu?i cùng và 2 ch? s? cu?i cùng c?a N. */

int main() {
    int a, b;
    scanf("%d %d", &a, &b); 

    int thuong1 = (a >= b) ? (a / b) : (b / a);  
    float thuong2 = (a >= b) ? ((double)a / b) : ((double)b / a);

    printf("%d\n", thuong1);
    printf("%.2f", thuong2);

    return 0;
}
