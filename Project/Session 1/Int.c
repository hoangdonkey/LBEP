#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( void ) {
	int int1;
	int int2;
	int Cong,Tru,Nhan,Chia;
	
	printf("So dau tien\n");
	scanf("%d", &int1);
	
	printf("So thu hai\n");
	scanf("%d", &int2);
	
	Cong = int1 + int2;
	Tru = int1 - int2;
	Nhan = int1 * int2;
	Chia = int1 / int2;

	printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d",int1,int2,Cong,int1,int2,Tru,int1,int2,Nhan,int1,int2,Chia);
	return 0;
}

