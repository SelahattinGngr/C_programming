#include<stdio.h>
#include<stdlib.h>

void	tekmiciftmi(int a) // burada tekmiciftmi adini verdigimiz fonksiyonu olusturduk
{
	if(a%2==0)
	{
		printf("Sayiniz Cift Sayidir");
	}
	else
	{
		printf("Sayiniz Tek Sayidir");
	}
}


int	main()
{
	int	a;
	printf("Lütfen Bir Sayi Giriniz\n");
	scanf("%d",&a);
	tekmiciftmi(a); // fonksiyonu cagirdik
	return(0);
}
