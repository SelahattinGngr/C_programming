#include<stdio.h>
#include<stdlib.h>

void	birden_ona(int	a)
{
	int	sonuc=1;

	while(a<=10)
	{
		sonuc*=a;
		printf("%d! = %d\n",a,sonuc);
		a++;
	}
}
