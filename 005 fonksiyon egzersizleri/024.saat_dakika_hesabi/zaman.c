#include<stdio.h>
#include<stdlib.h>

void	zaman(int saniye)
{
	int	saat,dakika;
	dakika=saniye/60;
	saniye-=dakika*60;
	saat=dakika/60;
	dakika-=saat*60;
	printf("%d:%d:%d",saat,dakika,saniye);
}
