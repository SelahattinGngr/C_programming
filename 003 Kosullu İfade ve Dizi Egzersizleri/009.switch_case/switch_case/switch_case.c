#include<stdio.h>
#include<stdlib.h>
#define kitapvergi 0.04
#define temelvergi 0.056
#define luksvergi 0.196

int	main()
{
	int	urun;
	float	fiyat;
	printf("Almak istediginiz Urunun Kodunu Girin\n");
	printf("0- kitap\n");
	printf("1- temel gida\n");
	printf("2- luks\n");
	scanf("%d",&urun);
	printf("Almis oldugunuz urunlerin fiyatini girin\n");
	scanf("%f",&fiyat);

	switch(urun)
	{
		case 0: fiyat+=fiyat*kitapvergi;
			printf("almis oldugunuz urunlerin ucreti vergi dahil %.2fTl dir\n",fiyat);
		break;
		case 1: fiyat+=fiyat*temelvergi;
			printf("almis oldugunuz urunlerin ucreti vergi dahil %.2fTl dir\n",fiyat);
		break;
		case 2: fiyat+=fiyat*luksvergi;
			printf("almis oldugunuz urunlerin ucreti vergi dahil %.2fTl dir\n",fiyat);
		break;
	}
}
