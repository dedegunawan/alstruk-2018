#include <stdio.h>
int absolut(int a) {
	return a < 0 ? (-1*a) : a;
}
void tampilkanAngka(char A, int a) {
	printf("Nilai dari %c = %d\n", A, a);
}
int inputInteger(char A) {
	int a;
	printf("Masukkan %c= ", A);
	scanf("%d", &a);
	return a;
}
int main() {
	int a, b, c;
	a = inputInteger('A');
	b = inputInteger('B');
	c = inputInteger('C');
	a = absolut(a);
	b = absolut(b);
	c = absolut(c);
	tampilkanAngka('A', a);
	tampilkanAngka('B', b);
	tampilkanAngka('C', c);
	getchar();
	return 0;
}
