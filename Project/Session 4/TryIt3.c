#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, S, P;
	
	printf("2 canh cua hinh chu nhat lan luot la (cm): ");
	scanf("%d %d", &a, &b);
	
	S = a * b;
	P = 2 * (a + b);
	
	printf("\nDien tich hinh chu nhat la (cm2): %d", S);
	printf("\nChu vi hinh chu nhat la (cm): %d", P);

	return 0;
}
