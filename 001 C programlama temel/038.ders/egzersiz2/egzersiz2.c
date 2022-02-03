#include<stdio.h>
#include<stdlib.h>

void	ustunu_al(int x,int y,int *sonuc)
{
	*sonuc=1;
	while(y>0)
	{
		*sonuc*=x;
		y--;
	}
}

int	main()
{
	int x=4;
	int y=5;
	int sonuc;
	ustunu_al(x,y,&sonuc);

	printf("%d",sonuc);
}
