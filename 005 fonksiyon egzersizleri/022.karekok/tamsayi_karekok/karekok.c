#include<stdio.h>
#include<stdlib.h>

void	karekok(int sayi)
{
	int i;
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0 && i*i==sayi)
		{
				printf("%d sayisinin karekoku %d\n",sayi,i);
		}
	}
}
