#include <stdio.h>

/* Nh?p vào chi?u dài và chi?u r?ng c?a HCN b?n h?y in ra chu vi và di?n tích c?a HCN ðó theo yêu c?u. */

int main() {
    long long dai, rong;
    scanf("%lld %lld", &dai, &rong);
    
    printf("Chu vi HCN la : %lld\n", (dai + rong) * 2);
    printf("Dien tich HCN la : %lld", dai * rong);

}
