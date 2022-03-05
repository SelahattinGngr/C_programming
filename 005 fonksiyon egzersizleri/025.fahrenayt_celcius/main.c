#include<stdio.h>
#include<stdlib.h>

void	derece(int deger,char simge);

int	main()
{
	int	deger;
	char	simge;
	printf("hangi derece bicimini donusturmek istiyorsunuz(F-C)\n");
	scanf("%c",&simge);
	if(simge == 'f')
	{
		printf("lutfen fahrenayt degerini giriniz\n");
		scanf("%d",&deger);
	}
	else if(simge == 'c')
	{
		printf("lutfen celcius degerini giriniz\n");
		scanf("%d",&deger);
	}
	else
	{
		printf("lutfen gecerli bir bicim giriniz");
	}
	derece(deger,simge);
}
