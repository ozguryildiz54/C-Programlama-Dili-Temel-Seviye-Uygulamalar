#include <stdio.h>

int main()
{
int a, b, c = 0;

printf (" Bir sayi giriniz: ");
scanf ("%d", &a);

printf ("\n");

for (b = 2; b <a; b ++)
{
// Kullanýcýdan alýnan sayý 2'den baþlanarak, kendisine kadar
// olan tüm tamsayýlara sýrayla bölünüyor. Eðer tam olarak
// bölünüyorsa c'nin deðeri bir artýrýlýyor.

if (a % b == 0) c ++;
}

// c'nin baþlangýç deðeri 0 idi. Eðer a'nýn tek bir tane bile tam
// böleni olsaydý, c'nin deðeri 0 kalmazdý. c'nin deðerinin 0
// kalmasý, kullanýcýnýn girdiði sayýnýn 2'den itibaren hiçbir
// tamsayýya tam olarak bölünemediði anlamýný taþýr. Yani girilen
// sayý asaldýr.

printf (" %s\n", (c == 0) ? "Sayi asaldir." : "Sayi asal degildir.");

return 0;
}
