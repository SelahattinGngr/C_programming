#include<stdio.h>
#include<stdlib.h>

int	mukemmel(int	n)
{
	int	i=1;
	int	toplam=0;

	while(i<n)
	{
		if(n%i==0)
		{
			toplam+=i;
		}
		i++;
	}
	if(toplam==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
