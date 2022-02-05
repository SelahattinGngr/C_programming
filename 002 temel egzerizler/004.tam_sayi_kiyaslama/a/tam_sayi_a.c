#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	a,b;
	printf("Lutfen 2 sayi girin\n");
	scanf("%d%d",&a,&b);

	if(a==b)
	{
		printf("Sayilar esit");
	}
	else
	{
		printf("Sayilariniz esit degil\n");
		if(a<b)
		{
			printf("%d kucuktur %d den",a,b);
		}
		else
		{
			printf("%d buyuktur %d den",a,b);
		}
	}

}
