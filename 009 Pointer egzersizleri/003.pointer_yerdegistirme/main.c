#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	elemansayisi,a[100];
	int	*pt;
	int	eleman=0,i=0;

	printf("dizinin eleman sayisiniz giriniz \n");
	scanf("%d",&elemansayisi);
	
	for(pt=a;pt<a+elemansayisi;pt++)
	{
		printf("eleman %d: ",eleman);
		scanf("%d",pt);
		eleman++;
	}
	printf("\n\n");
	printf("dizinin normal hali: ");
	for (pt=a;pt<a+elemansayisi;pt++)
	{
		printf("%d ",*pt);
	}
	printf ("\nyerlerinin degismis hali :");
	pt--;
	for (pt = a + elemansayisi - 1;pt>=a;pt--)
	{
		printf("%d ",*pt);
	}
}
