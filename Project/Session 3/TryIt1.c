#include<stdio.h>

int main1()
{    
int r;
double c, s, pi;
pi = 3.14159265358979323846;

printf("Nhap vao ban kinh hinh tron (cm): ");
scanf("%d", &r);


s = (r*r) * pi;
c = (r*2) * pi; 

printf("Dien tich hinh tron la (cm2): %f ", s);
printf("\nChu vi hinh tron la (cm): %f ", c);
 
return 0;
}
