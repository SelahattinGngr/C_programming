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
			printf("Buras� Rize Demle Çayları <3\n");
			continue; // continue komutunu silersek sayıyla beraber prıntf komutunu yazıyor
		}

		if(i==61)
		{
			printf("Buras� Trabzon\n");
			continue; // continue komutunu kullanarak for a ger� donuyoruz 
		}
		printf("%d\n",i);
	}
}
