#include<stdio.h>
#include<stdlib.h>
#define kitapvergi 0.04
#define temelvergi 0.056
#define luksvergi 0.196

int	main()
{
	int	urun,dongu=1;
	float	fiyat;
	while(dongu>0)
	{
	printf("Almak istediginiz Urunun Kodunu Girin\n");
	printf("0- kitap\n");
	printf("1- temel gida\n");
	printf("2- luks\n");
	scanf("%d",&urun);
	printf("Almis oldugunuz urunlerin fiyatini girin\n");
	scanf("%f",&fiyat);

		if(urun==0)
		{
			fiyat+=fiyat*kitapvergi;
			printf("almis oldugunuz urunlerin ucreti vergi dahil %.2fTl dir\n",fiyat);
			dongu=-5;
		}
		else if(urun==1)
		{
			fiyat+=fiyat*temelvergi;
			printf("almis oldugunuz urunlerin ucreti vergi dahil %.2fTl dir\n",fiyat);
			dongu=-5;
		}
		else if(urun==2)
		{
			fiyat+=fiyat*luksvergi;
			printf("almis oldugunuz urunlerin ucreti vergi dahil %.2fTl dir\n",fiyat);
			dongu=-5;
		}
		else
		{
			printf("secmis oldugunuz urun kayitlarimizda bulunamadi lutfen tekrar deneyin\n\n");
			dongu++;
		}
	}
}
