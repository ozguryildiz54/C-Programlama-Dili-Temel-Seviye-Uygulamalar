#include <stdio.h> 
#include <conio.h> 
main()
{ 
float VCC,RB,RC,BT,IB,IC,VCE,re,hie,Zi,Zo,Av; 
printf ("*** BJT Devre Analizi ***\n"); 
printf("\nBesleme gerilimi de�eri (Vcc) => "); scanf("%f",&VCC);
printf("Rb diren� de�eri (Kohm) => ");scanf("%f",&RB); 
printf("Rc diren� de�eri (Kohm) => ");scanf("%f",&RC); 
printf("Beta de�eri => ");scanf("%f",&BT); 
IB=(VCC-0.7)/RB;IC=BT*IB;
VCE=((VCC-IC) *RC)/1000 ; 
re=26/IC;hie=BT*re;
Zi=(RB*hie)/(RB+hie);
Zo=RC;Av=-RC*1000/re;
printf("\n 	 SONU�LAR 	\n");
printf(" ================\n");
printf("\n DA Analiz	\n");
printf("Kollektor ak�m� Ic=%0.3f mA\n",IC);
printf("Kollektor-emitor gerilimi Vce=%0.3f V\n",VCE);
printf("\n AA Analiz	\n");
printf("Giri� direnci Zi=%0.3f Kohm\n",Zi); printf("��k�� direnci Zo=%0.3f Kohm\n",Zo); 
printf("Gerilim kazanc� Av=%0.3f\n",Av);
getch();
}
