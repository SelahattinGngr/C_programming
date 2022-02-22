#include<stdio.h>
#include<stdlib.h>

int	faktoriyel(int	a)
{
	int	sonuc=1;
	for(int	i=0;a>0;a--)
	{
		sonuc*=a;
	}
	return sonuc;
}
