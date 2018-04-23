#include <stdio.h>

int main() {
	int a, b;
	printf("Masukkan A =");
	scanf("%d", &a);
	printf("Masukkan B =");
	scanf("%d", &b);
	if (a > b) {
		printf("A lebih besar dari B (%d>%d)\n", a, b);
	} else if(a < b) {
		printf("A lebih keci dari B (%d<%d)\n", a, b);
	} else {
		printf("A sama dengan B (%d=%d)\n", a, b);
	}
	getchar();
	return 0;
}