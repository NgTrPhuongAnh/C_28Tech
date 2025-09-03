#include <stdio.h>

// Nam nhu?n là nam chia h?t cho 400 ho?c (chia h?t cho 4 và không chia h?t cho 100). Nh?p vào N là m?t nam và ki?m tra xem N có ph?i là nam nhu?n hay không?

int main() {
	int N;
	scanf("%d", &N);
	
	if (N % 400 == 0 || (N % 4 == 0 && N % 100 != 0)) {
		printf("YES");
	} else {
		printf("NO");
	}
}
