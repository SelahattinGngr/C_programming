#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	hafta[7][10]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
	char	*pt;
	int	gun;
	
	pt=hafta;

	do
	{
		printf("lutfen 1 ve 7 arasinda bir deger vererek haftanin gunlerini bastirin: ");
		scanf("%d",&gun);
	}while(gun<=0 || gun>7);

	printf("\n%d numarali haftanin gunu %s",gun,*(hafta+gun-1));
}
