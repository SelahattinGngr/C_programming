#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main()
{
	char	kelime[100];
	int	i=0;
	int	j=0;
	printf("lutfen bir kelime girin\n");
	scanf("%s",&kelime);
	
	while(i<strlen(kelime))
	{
		j=0;//dongu her basladiginda 0 olmasi icin yazdik
		while(j<=i)
		{
			printf("%c",kelime[j]);
			j++;
		}
		printf("\n");

		i++;
	}
	return 0;
}
