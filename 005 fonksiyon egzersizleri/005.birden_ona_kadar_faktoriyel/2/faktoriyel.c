#include<stdio.h>
#include<stdlib.h>

int	birden_ona(int	a)
{
	int	i,sonuc=1;

	for(i=1;i<=a;i++)
	{
		sonuc*=i;
	}
	return sonuc;
}
