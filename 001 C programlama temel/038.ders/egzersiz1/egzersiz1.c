#include<stdio.h>
#include<stdlib.h>

int	ustunu_al(int x,int y)
{
	int	sonuc=1;
	while(y>0)
	{
		sonuc*=x;
		y--;
	}
	return(sonuc);
}

int	main()
{
	int x=4;
	int y=5;
	int sonucum;
	sonucum=ustunu_al(x,y);
	printf("%d",sonucum);
}
