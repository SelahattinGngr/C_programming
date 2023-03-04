#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	a[15]={'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x'};
	char	*bir;
	char	*iki;
	char	kopya[15];
	int	i;

	iki=kopya;

	for(bir=a;bir<a+15;bir++)
	{
		*iki=*bir;
		iki++;
	}

	printf("orjinal cikti:");
	for(i=0;i<15;i++)
	{
		printf("%2c",*(a+i));
	}

	printf("\nkopya   cikti:");
	for(i=0;i<15;i++)
	{
		printf("%2c",*(kopya+i));
	}
}
