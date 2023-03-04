#include<stdio.h>
#include<stdlib.h>
#define n 10
int	main()
{
	int	sayi[n];
	int	i,max,min;
	int	*selo;

	printf("lütfen %d adet sayi giriniz\n",n);

	for(selo=sayi;selo<sayi+n;selo++)
	{
		scanf("%d",selo); 
	}

	max=min=sayi[0];
	for(selo=sayi+1;selo<sayi+n;selo++)
	{
		if(max<*selo)
		{
			max=*selo;
		}
	}
	for(selo=sayi+1;selo<sayi+n;selo++)
	{
		if(min>*selo)
		{
			min=*selo;
		}
	}

	printf("en buyuk deger: %d\n",max);
	printf("en kucuk deger: %d\n",min);
}
