#include <stdio.h>

int main()
{
int a, b, c = 0;

printf (" Bir sayi giriniz: ");
scanf ("%d", &a);

printf ("\n");

for (b = 2; b <a; b ++)
{
// Kullan�c�dan al�nan say� 2'den ba�lanarak, kendisine kadar
// olan t�m tamsay�lara s�rayla b�l�n�yor. E�er tam olarak
// b�l�n�yorsa c'nin de�eri bir art�r�l�yor.

if (a % b == 0) c ++;
}

// c'nin ba�lang�� de�eri 0 idi. E�er a'n�n tek bir tane bile tam
// b�leni olsayd�, c'nin de�eri 0 kalmazd�. c'nin de�erinin 0
// kalmas�, kullan�c�n�n girdi�i say�n�n 2'den itibaren hi�bir
// tamsay�ya tam olarak b�l�nemedi�i anlam�n� ta��r. Yani girilen
// say� asald�r.

printf (" %s\n", (c == 0) ? "Sayi asaldir." : "Sayi asal degildir.");

return 0;
}
