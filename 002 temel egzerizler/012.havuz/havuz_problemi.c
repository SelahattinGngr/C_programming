#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	en,boy,yukseklik,sonuc;
	printf("Lütfen havuzun En Boy Uzunluk degerlerini Girin\n");
	scanf("%d%d%d",&en,&boy,&yukseklik);

	sonuc=en*boy*yukseklik;
	printf("havuzumuz %d metre³ su alır",sonuc);
}
