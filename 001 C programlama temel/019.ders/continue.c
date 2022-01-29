/* continue: atlat demek. */

#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int i;
	
	for(i=1;i<=81;i++)
	{
		if(i==53)
		{
			printf("Burasý Rize Demle Ã‡aylarÄ± <3\n");
			continue; // continue komutunu silersek sayÄ±yla beraber prÄ±ntf komutunu yazÄ±yor
		}

		if(i==61)
		{
			printf("Burasý Trabzon\n");
			continue; // continue komutunu kullanarak for a gerý donuyoruz 
		}
		printf("%d\n",i);
	}
}
