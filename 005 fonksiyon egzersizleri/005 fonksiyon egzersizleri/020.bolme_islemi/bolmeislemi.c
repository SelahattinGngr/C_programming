#include<stdio.h>
#include<stdlib.h>

void	bolmeislemi(int bolunen,int bolen)
{
	int	bolum;
	int	kalan;

	kalan=bolunen%bolen;
	bolum=bolunen/bolen;
	printf("kalan= %d\n",kalan);
	printf("bolum= %f",bolum);
}
