#include <stdio.h>
#include <math.h>
float a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5;

float a6, a7, a8, b6, b7, b8, c6, c7, c8, d6, d7, d8;
float toplamX, toplamY, Carpim, kareX, xy, toplam, n, b, a;


float toplamf(float a, float b, float c, float m, float n, float e, float q, float z){
toplam = a+b+c+m+n+e+q+z;
return toplam;	
}

float carpim(float p, float q){
	Carpim = p*q;
	return Carpim;
}


int main() {

printf("n degerini giriniz:\n\n");
scanf("%f", &n);
toplamX = 0;
printf("X degerlerini giriniz:\n\n");
printf("a1:");
scanf("%f", &a1);
printf("a2:");
scanf("%f", &a2);
printf("a3:");
scanf("%f", &a3);
printf("a4:");
scanf("%f", &a4);
printf("a5:");
scanf("%f", &a5);
printf("a6:");
scanf("%f", &a6);
printf("a7:");
scanf("%f", &a7);
printf("a8:");
scanf("%f", &a8);
toplamX = toplamf(a1, a2, a3, a4, a5, a6, a7, a8);

toplamY = 0;
printf("Y degerlerini giriniz:\n\n");
printf("b1:");
scanf("%f", &b1);
printf("b2:");
scanf("%f", &b2);
printf("b3:");
scanf("%f", &b3);
printf("b4:");
scanf("%f", &b4);
printf("b5:");
scanf("%f", &b5);
printf("b6:");
scanf("%f", &b6);
printf("b7:");
scanf("%f", &b7);
printf("b8:");
scanf("%f", &b8);
toplamY = toplamf(b1, b2, b3, b4, b5, b6, b7, b8);

c1 = carpim(a1, a1);
c2 = carpim(a2, a2);
c3 = carpim(a3, a3);
c4 = carpim(a4, a4);
c5 = carpim(a5, a5);
c6 = carpim(a6, a6);
c7 = carpim(a7, a7);
c8 = carpim(a8, a8);
kareX = toplamf(c1, c2, c3, c4, c5, c6, c7, c8);

d1 = carpim(a1, b1);
d2 = carpim(a2, b2);
d3 = carpim(a3, b3);
d4 = carpim(a4, b4);
d5 = carpim(a5, b5);
d6 = carpim(a6, b6);
d7 = carpim(a7, b7);
d8 = carpim(a8, a8);
xy = toplamf(d1, d2, d3, d4, d5, d6, d7, d8);

printf("\t--------------------------------------------------------\n");
printf("\t\t\t*Regresyon Tablosu *\n");
printf("\t\t\t................... \n");


printf("\n\tX\t\tY\t\tX^2\t\tXY\t\t\n");
printf("\n\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", a1, b1, c1, d1);
printf("\n\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", a2, b2, c2, d2);
printf("\n\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", a3, b3, c3, d3);
printf("\n\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", a4, b4, c4, d4);
printf("\n\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", a5, b5, c5, d5);
printf("\n\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", a6, b6, c6, d6);
printf("\n\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", a7, b7, c7, d7);
printf("\n\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", a8, b8, c8, d8);
printf("\t==================================================\n");
printf("\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", toplamX, toplamY, kareX, xy);
printf("\t==================================================\n\n");

b = (carpim(n, xy) - carpim(toplamX, toplamY)) / (carpim(n, kareX) - pow(toplamX, 2));
a = (toplamY/n) - carpim(b, toplamX)/n;
printf("Regresyon katsayýsý:\t%.2f\n\n", b);
printf("Regresyon sabiti:\t%.2f\n\n", a);


}
