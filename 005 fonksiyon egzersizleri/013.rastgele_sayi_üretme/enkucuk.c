#include<stdio.h>
#include<stdlib.h>

int	enkucuk(int dizi[],int a)
{
	int	i,enk;
	enk=dizi[0];
	for(i=0;i<a;i++)
	{
		if(dizi[i]<enk)
		{
			enk=dizi[i];
		}
	}
	return enk;
}
