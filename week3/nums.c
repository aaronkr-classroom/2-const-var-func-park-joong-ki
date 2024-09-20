#include <stdio.h>

int main(void) {
	int decimal = 42;
	int octal = 052;
	int hax = 0x2A;
	int binary = 0b101010;

	printf("DEcimal : %d \n", decimal);
	printf("Octal: %o (prefix 0 : 0%o) =%d\n", octal, octal, octal);
	printf("Hexadecimal : %x (prefix 0x : 0x%x) =%d\n", hax, hax ,hax);
	printf("Binary(manual):0b101010 = %d\n", binary);

	return 0;
}