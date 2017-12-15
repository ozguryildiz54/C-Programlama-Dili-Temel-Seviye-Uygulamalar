#include<stdio.h>
#include <conio.h> 
#include <math.h> 
int x,n,i; 
float t=1,f=1; 
int main()
{ 
printf("n degerini giriniz: ");
scanf("%d",&n); 
printf("x degerini giriniz: ");
scanf("%d",&x); 
for (i=1; i<n; i++)
{ 
f*=i;
t+=pow(x,i)/f; 
} 
printf("\nSeri acilimi ile e üzeri x deðeri: %f\n",t); 
printf("Komutla e üzeri x deðeri: %f\n",exp(x)); 
getch();
 }
