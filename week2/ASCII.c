// ASCII.c
#include <stdio.h>

int main(void) {
	char x = 72;
	char y = 105;
	char z = 33;

	printf("ASCII %d + %d + %d = %c%c%c\n", x, y, z, x, y, z);

	char a = 'A';
	char b = a + 1;
	printf("\n%c + 1 = %c", a, b);

	printf("\n\nASCII ���ڴ� ������� ����ϱ�:");
	for (int i = 97; i <= 122; i++) {
		printf("\nASCII : %d = %c", i, i);
	}
	printf("\n\n");

	return 0;
}