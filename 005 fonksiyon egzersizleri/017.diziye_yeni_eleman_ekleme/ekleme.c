#include<stdio.h>
#include<stdlib.h>

void	ekleme(int sayi,int dizi[])
{
	int	sira,toplam;
	printf("\nislem yapmak istediginzi sayinin sirasini yazin\n");
	scanf("%d",&sira);
	printf("%d sayisina kac eklemek istediginizi yazin\n",dizi[sira]);
	scanf("%d",&toplam);
	printf("%d",dizi[sira]+toplam);
}
