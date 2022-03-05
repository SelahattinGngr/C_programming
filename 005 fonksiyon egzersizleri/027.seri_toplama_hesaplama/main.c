#include<stdio.h>
#include<stdlib.h>

int	oruntu(int seri)
{
	int	i,j=0;
		
	for(i=1;i<=seri;i++)
	{
		j+=i*i;
	}
	return j;
}

int	main()
{
	int	seri;
	printf("seri kaca kadar devam edecek\n");
	scanf("%d",&seri);
	printf("serinin toplami = %d",oruntu(seri));
}
