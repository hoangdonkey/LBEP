#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Bsal = 12000, DA, HRA = 150, TA = 120, other = 450, PF, IT, Nsal;
	
	DA = (Bsal / 100) * 12;
	PF = (Bsal / 100) * 14;
	IT = (Bsal / 100) * 15;
	Nsal = Bsal + DA + HRA + TA + other - (PF + IT);
	
	printf("Basic salary: %d", Bsal);
	printf("\n\nDA: %d", DA);
	printf("\nHRA: %d", HRA);
	printf("\nTA: %d", TA);
	printf("\nOther: %d", other);
	printf("\n\nPF tax: %d", PF);
	printf("\nIT tax: %d", IT);
	printf("\n\nNet salary: %d", Nsal);
	
	return 0;
}
