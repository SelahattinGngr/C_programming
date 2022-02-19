#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main()
{
	char	cumle[100];
	int	i=0;
	int	sayac=0;
	printf("Lutfen cumlenizi yaziniz\n");
	gets(cumle);

	while(cumle[i])
	{
		if(cumle[i]==32)
		{
			sayac++;
		}
		i++;
	}
	printf("cumleniz %d kelimedir",sayac+1);
	return 0;
}
