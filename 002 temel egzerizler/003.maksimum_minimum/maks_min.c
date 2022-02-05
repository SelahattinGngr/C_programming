#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	a,b,c;
	int	kucuk,buyuk;
	printf("Lütfen 3 sayi giriniz \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n");

	buyuk=a;
	if(buyuk<b)
	{
		buyuk=b;
	}
	if(buyuk<c)
	{
		buyuk=c;
	}
	kucuk=a;
	if(kucuk>b)
	{
		kucuk=b;
	}
	if(kucuk>c)
	{
		kucuk=c;
	}
	printf("En Kucuk %d\n",kucuk);
	printf("En Buyuk %d",buyuk);
}
