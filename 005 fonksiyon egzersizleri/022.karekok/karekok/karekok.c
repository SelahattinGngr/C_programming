#include<stdio.h>
#include<stdlib.h>

void	karekok(double sayi)
{
	double kare;
	int i;
	if(sayi>0.0)
	{
		kare=sayi/2;
		for(i=0;i<100000;i++)
		{
			kare=((kare*kare)+50)/(2*kare);
		}
		return kare;
	}
	else if(sayi==0)
	{
		return 0;
	}
	else
	{
		printf("gecerli bir sayi girin");
	}
}
