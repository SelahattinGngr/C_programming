#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	a[10][10];
	char	*pt;
	char	*ptt;
	char	gecici;
	int	kelime;
	int	i;

	pt=a;

	printf("kac kelime yazacaksiniz (max 10): ");
	scanf("%d",&kelime);

	printf("\nmax 10 harf olacak sekilde kelime/kelimeler'i yaziniz\n");
	for(i=0;i<kelime;i++)
	{
		printf("%d. kelime: ",i);
		scanf("%s",a[i]);
	}

	for(i=0;i<kelime;i++)
	{
		pt=ptt=a+i;

		while(*ptt)
		{
			ptt++;
		}
		ptt--;

		while(pt<ptt)
		{
			gecici=*pt;
			*pt=*ptt;
			*ptt=gecici;
			pt++;
			ptt--;
		}

	}

	for(i=0;i<kelime;i++)
	{
		printf("%s \n",*(a+i));
	}
}
