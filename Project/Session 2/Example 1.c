#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1(int argc, char *argv[]) {
	int a,b,c;
	
	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);
	
	c = a + b;
	
	printf("\nSum = %d", c);
	
	return 0;
}
