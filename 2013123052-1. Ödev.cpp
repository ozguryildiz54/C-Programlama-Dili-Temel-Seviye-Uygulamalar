#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
int main()
{
	system("color 0A");
	//Robotun, mallarýn ve paletin konumlarinin belirlenecegi degiskenler
	int x_mal=-1,y_mal=-1;
	int x_robot=-1,y_robot=-1;
	int x_palet=-1,y_palet=-1;
	int palet_bos_yer=9;
	int palet_satir=0,palet_sutun=0;
	printf("Lutfen yuklenecek mallarin x ve y ekseninde ki koordinatlarini giriniz.\n");
	scanf("%d\t%d",&x_mal,&y_mal); //Koordinatlar bu saatirda girilmektedir.
	printf("Lutfen robotun x ve y ekseninde ki koordinatlarini giriniz.\n");
	scanf("%d\t%d",&x_robot,&y_robot); //Koordinatlar bu saatirda girilmektedir.
	printf("Lutfen paletin x ve y ekseninde ki koordinatlarini giriniz.\n");
	scanf("%d\t%d",&x_palet,&y_palet); //Koordinatlar bu saatirda girilmektedir.
	printf("Sistem dongu icinde calistigindan sistemin akisini kolay takip edebilmek icin her hangi bir tusa basin!\n");
	getch();
	for(int o=1;o<10;o++)
	{
		    
			printf("Robot tutucu kolunu mallari almak icin %d,%d konumuna hareket ettiriyor.\n",x_mal,y_mal);
			char x=219;
			int i,j,z,k,m=-10;
			
			for(j=0;j<1;j++)
			{
			    printf("\n"); 
			    printf("\t");
			    printf("Robot Kolunun Malimiza Ulasip Alma Durumu : \n");
				printf("\t");
			    for(z=0;z<21;z++)
				{
			    	printf("%c%c",x,x);
					_sleep(200);	
				}
			}
			printf("\nIslem basarili mal robot kolunda tutulmaktadir.\n");
			printf("Devam edebilmek icin her hangi bir tusa basin!\n");
			getch();
		    printf("Mal robot kolunun tutucu govdesinde %d %d konumunda ki palete dogru tasinmaktadir.\n",x_palet,y_palet);
			for(j=0;j<1;j++)
			{
			    printf("\n"); 
			    printf("\t");
			    printf("Robot Kolunun Palete Ulasip Mali Birakma Durumu : \n");
				printf("\t");
			    for(z=0;z<21;z++)
				{
			    	printf("%c%c",x,x);
					_sleep(200);	
				}
			}
			if(palet_sutun==3)
			palet_sutun=0;	
			if(o<4)
			palet_satir=1;
			if(o>3 && o<7)
			palet_satir=2;
			if(o>6 && o<10)
			palet_satir=3;
			palet_sutun++;
			printf("\nMal paletin %d. satir %d nolu sutununa yerlestirildi.\n",palet_satir,palet_sutun);
			palet_bos_yer--;
			printf("Devam edebilmek icin her hangi bir tusa basin!\n");
			getch();
			printf("Palette toplam %d adet bos yer kalmistir.\n",palet_bos_yer);
			printf("Robot kol mal alinan konuma geri donuyor.\n");
	}
	printf("Tum mallar palete yerlestirildi ve palette bos yer kalmadigindan mal tasima islemi bitmistir.\n");
	return 0;
}

//Hocam projeye eklemek istedigim 2 ozellik daha vardý onlarý ekleyemedim cok ugrastým ama program stabil calýsmýyordu.
	// 1. Alfasayýsal karakter kontrolu yani koordinat girerken klavyede ki harflere basýldýgýnda uyarý vermesini istiyordum.
	// Bunun icin su yontemi kullandým ancak basarili olamadým 
	/*
	int sayi;
	do
		{
			printf("Sayi gir.");
			scanf("%d",&sayi);
		}while(sayi=='int');	
		printf("tamsayi karakteri girildi.");
		C ve C++ programlama dilinde karakter sýnýrlamasý hakkýnda bilginiz varsa yardýmcý olursaniz sevinirim.
	*/ 
	// 2. ozellik ise girilen koordinatlarýn ucununde ayný olmadan farklý konumlarda olmasýydý bu aslýnda kolay ancak ayný koordinatlarý girip kullanýcýya yeniden
	//koordinat girme sansý verdigimde program sonsuz donguye giriyordu tam halledemedim goto deyimini ve dongu yapýsýný kullandým ama yapamadým. 
	// Bu iki ozellik eksik farkýndayým ama yardýmcý olursanýz ogrenmeye acýgým.
	// Diger herseyi elimden geldigi kadar yapmaya calistim.
