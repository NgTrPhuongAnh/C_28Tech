#include <stdio.h>

/* Nh?p v�o chi?u d�i v� chi?u r?ng c?a HCN b?n h?y in ra chu vi v� di?n t�ch c?a HCN �� theo y�u c?u. */

int main() {
    long long dai, rong;
    scanf("%lld %lld", &dai, &rong);
    
    printf("Chu vi HCN la : %lld\n", (dai + rong) * 2);
    printf("Dien tich HCN la : %lld", dai * rong);

}
