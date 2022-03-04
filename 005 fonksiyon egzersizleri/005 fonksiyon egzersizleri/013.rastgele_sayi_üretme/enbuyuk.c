#include<stdio.h>
#include<stdlib.h>

int	enbuyuk(int dizi[],int a)
{
	int	i,enb;
	enb=dizi[0];
	for(i=0;i<a;i++)
	{
		if(dizi[i]>enb)
		{
			enb=dizi[i];
		}
	}
	return enb;
}
