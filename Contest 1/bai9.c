#include <stdio.h>

// Nam nhu?n l� nam chia h?t cho 400 ho?c (chia h?t cho 4 v� kh�ng chia h?t cho 100). Nh?p v�o N l� m?t nam v� ki?m tra xem N c� ph?i l� nam nhu?n hay kh�ng?

int main() {
	int N;
	scanf("%d", &N);
	
	if (N % 400 == 0 || (N % 4 == 0 && N % 100 != 0)) {
		printf("YES");
	} else {
		printf("NO");
	}
}
