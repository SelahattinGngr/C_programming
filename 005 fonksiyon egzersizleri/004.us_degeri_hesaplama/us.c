#include<stdio.h>
#include<stdlib.h>

int	us_alma(int a,int b)
{
	int	d=a;
	int	sonuc=1;
	int	c=1;
		for(int i=1;i<=b;i++)
		{
			printf("%d ^ %d = %d\n",a,i,sonuc*=a);
		}
	return sonuc;
}
