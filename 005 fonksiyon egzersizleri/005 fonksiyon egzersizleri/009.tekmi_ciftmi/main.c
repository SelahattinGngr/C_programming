#include<stdio.h>
#include<stdlib.h>

int	tekmiciftmi(int	a);

int	main()
{
	int	sayi1,cifmitekmi;
	printf("lutfen pozitif bir tamsayi giriniz\n");
	scanf("%d",&sayi1);
	cifmitekmi=tekmiciftmi(sayi1);
	if(cifmitekmi==0)
	{
		printf("%d sayisi cift bir sayidir",sayi1);
	}
	else
	{
		printf("%d sayisi tek bir sayidir",sayi1);
	}
}
