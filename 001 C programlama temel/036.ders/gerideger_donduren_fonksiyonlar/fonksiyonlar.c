#include<stdio.h>
#include<stdlib.h>

int	tekmiciftmi(int selo)
{
	if(selo%2==1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
int	main()
{
	int	a,b;
	printf("Lutfen Bir Sayi Girin\n");
	scanf("%d",&a);
	b=tekmiciftmi(a);

	if(b==1)
	{
		printf("Sayiniz tek");
	}
	else
	{
		printf("Sayiniz cift");
	}
	return(0);
}
