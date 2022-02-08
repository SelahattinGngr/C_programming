#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	sayi;
	int	i=0;
	int	satir=0;
	printf("lütfen bir sayi girin\n");
	scanf("%d",&sayi);

	while(i<=sayi)
	{
		if(i%17==0)
		{
			printf("%5d",i);
			satir++;
			if(satir%10==0)
			{
				printf("\n");
			}
		}	
		i++;
	}
}
