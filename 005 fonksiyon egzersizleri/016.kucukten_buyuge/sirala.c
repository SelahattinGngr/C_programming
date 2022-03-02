#include<stdio.h>
#include<stdlib.h>

void	sirala(int a[],int adet)
{
	int	i,j,kucuk;
	srand(time(0));
	printf("rastgele siralama ile uretilen sayilar\n");
	for(i=0;i<adet;i++)
	{
		a[i]=rand()%100;
		printf("%d\n",a[i]);
	}
	for(i=0;i<adet;i++)
	{
		for(j=0;j<adet;j++)
		{
			if(a[j]>=a[i])
			{
				kucuk=a[i];
				a[i]=a[j];
				a[j]=kucuk;
			}
		}
	}
	printf("kucukten buyuge siralama\n");
	for(i=0;i<adet;i++)
	{
		printf("%d\n",a[i]);
	}
}
