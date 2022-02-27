#include<stdio.h>
#include<stdlib.h>

void	sirasil(int sayi,int dizi[])
{
	int i,sil;
	printf("silinecek degerin sira numarasini girin\n");
	scanf("%d",&sil);
	printf("\n");
	for(i=0;i<sayi;i++)
	{
		if(i==sil-1)
		{
			continue;
		}
		printf("%d\n",dizi[i]);
	}

}
