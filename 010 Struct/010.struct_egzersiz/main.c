#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// c yukaridan assagi calistigi icin en buyuk catiyi assagida tuttuk

typedef enum
{
	satista,
	satildi
}satis;

typedef	union
{
	double	fiyat;
	char	marka[20];
}bilgi;

typedef	struct
{
	satis	a;
	bilgi	b;
}araba;

void	araba_kontrol(int i)
{
	switch(i)
	{
		case	satista:
			printf("arac satistadir\n");
		break;
		case	satildi:
			printf("arac satilmistir\n");
		break;
	}
}

int	main()
{
	araba	araba_A;

	araba_A.a=0;
	strcpy(araba_A.b.marka,"anadol");
	printf("araba hakkinda\n\n");	
	araba_kontrol(araba_A.a);
	printf("arabanin markasi %s ",araba_A.b.marka);

	araba_A.a=1;
	araba_A.b.fiyat=20000;
	printf("\n\nbir gun sonra araba hakkinda \n\n");
	araba_kontrol(araba_A.a);
	printf("aracin satis fiyati %.0f",araba_A.b.fiyat);
}
