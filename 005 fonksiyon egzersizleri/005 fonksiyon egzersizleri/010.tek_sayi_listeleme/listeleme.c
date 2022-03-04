#include<stdio.h>
#include<stdlib.h>

int	listeleme(int	n)
{
	int	i=1;
	
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%3d",i);
		}
		i++;
	}
}
