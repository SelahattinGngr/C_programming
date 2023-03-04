#include<stdio.h>
#include<stdlib.h>

typedef	enum aylar
{
	ocak=1,
	subat,
	mart,
	nisan,
	mayis,
	haziran,
	temmuz,
	agustos,
	eylul,
	ekim,
	kasim,
	aralik
}ay;

void	ay_goster(ay a)
{
	switch(a)
	{
		case	ocak:
			printf("ocak");
		break;
		
		case	subat:
			printf("subat");
		break;

		case	mart:
			printf("mart");
		break;

		case	nisan:
			printf("nisan");
		break;

		case	mayis:
			printf("mayis");
		break;

		case	haziran:
			printf("haziran");
		break;
		
		case	temmuz:
			printf("temmuz");
		break;

		case	agustos:
			printf("agustos");
		break;

		case	eylul:
			printf("eylul");
		break;

		case	ekim:
			printf("ekim");
		break;

		case	kasim:
			printf("kasim");
		break;

		case	aralik:
			printf("aralik");
		break;

		default:
			printf("boyle bir ay yok amk");
		break;
	}
}

int	main()
{
	char	selos="selo"; // default degeri yazdirmak icin olusturdum bir vasfi yok
	ay selo=selos;  // enum icindeki her bir deger int dir eylul yerine 9 yazsam cikti olarak yine eylul verir
	ay_goster(selo);
}
