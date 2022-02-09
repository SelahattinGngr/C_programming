#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	a,b,c,ucgen;
	printf("ucgenin acilarini girin\n");
	scanf("%d%d%d",&a,&b,&c);

	ucgen=a+b+c;

	if(ucgen==180)
	{
		if(a==b && a==c)
		{
			printf("Bu Bir Eskenar Ucgendir");
		}
		else if(a==b || a==c || b==c )
		{
			printf("Bu Bir Esit Kenar Ucgendir");
		}
		else
		{
			printf("Bu Bir Cesit Kenar Ucgendir");
		}
	}
	else
	{
		printf("Bu Bir Ucgen Degildir");
	}
}
