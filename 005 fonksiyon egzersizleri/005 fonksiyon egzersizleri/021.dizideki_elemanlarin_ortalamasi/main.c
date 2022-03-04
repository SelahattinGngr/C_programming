#include<stdio.h>
#include<stdlib.h>

void ortalama(int *dizim,int boyut);

int	main()
{
	int	boyut;
	printf("kac adet eleman girilecek\n");
	scanf("%d",&boyut);
	int	dizim[boyut];
	for(int i=0;i<boyut;i++)
	{
		printf("%d. sayiyi giriniz.\n",i+1);
		scanf("%d",&dizim[i]);
	}
	ortalama(dizim,boyut);
}
