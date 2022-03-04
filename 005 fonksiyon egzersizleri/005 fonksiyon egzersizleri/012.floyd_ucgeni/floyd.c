#include<stdio.h>
#include<stdlib.h>

int	floyd(int satir)
{
	int	i=1;//satiri belirleyecek
	int	sayi=1;
	int	a=1;//satirda kac sayi yazacagini belirleyecek
	int	sayac=1;//satirda kac sayi oldugunu sayacak

	while(i<=satir)
	{
		printf("%4d",sayi);
		if(sayac==i)
		{
			printf("\n");
			sayac=0;
			i++;
		}
		sayi++;
		sayac++;
	}
}
