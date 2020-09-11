#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, h, pi, s, v;
	
	printf("Nhap ban kinh day hinh tru (cm): ");
	scanf("%f", &r);
	
	printf("Nhap chieu cao hinh tru (cm): ");
	scanf("%f", &h);
	
	pi = 3.14159;
	s = (r * r) * pi;
	v = s * h;
	
	printf("\nThe tich hinh tru la (cm3): %f", v);
	
	return 0;
}
