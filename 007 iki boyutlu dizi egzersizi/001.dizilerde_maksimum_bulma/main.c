#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	dizi[10],i;
	for(i=0;i<10;i++)
	{
		printf("lutfen diziye on adet deger verin\n");
		scanf("%d",&dizi[i]);
	}
	int	buyuk=0,kucuk=0;
	for(i=0;i<10;i++)
	{
		if(buyuk<dizi[i])
		{
			buyuk=dizi[i];
		}
		if(kucuk>dizi[i])
		{
			kucuk=dizi[i];
		}
	}
	printf("dizinin en buyuk degeri = %d",buyuk);
	printf("\ndizinin en kucuk degeri = %d",kucuk);
}
