#include<stdio.h>
#include<stdlib.h>

void	bolmeislemi(int	bolunen,int bolen);

int	main()
{
	int	bolunen,bolen;
	printf("lutfen bolunen ve bolen degerlerini giriniz.\n");
	scanf("%d%d",&bolunen,&bolen);
	bolmeislemi(bolunen,bolen);
}
