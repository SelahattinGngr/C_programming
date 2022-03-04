#include<stdio.h>
#include<stdlib.h>

int	negatif(int a)
{
	printf("lütfen bir tam sayi giriniz (negatif deger verdiginizde veri alma biter)\n");
	scanf("%d",&a);

	while(a>=0)
	{
		printf("lütfen bir tam sayi giriniz (negatif deger verdiginizde veri alma biter)\n");
		scanf("%d",&a);
	}
	return a;
}
