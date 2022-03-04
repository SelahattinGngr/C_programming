#include<stdio.h>
#include<stdlib.h>

void	yerdegistir(int x,int y)
{
	int	degisim;
	degisim=x;
	x=y;
	y=degisim;
	printf("yer degistiriliyor...\n");
	printf("x= %d",x);
	printf("\ny= %d",y);
}
