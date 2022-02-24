#include<stdio.h>
#include<stdlib.h>

int	floyd(int satir);

int	main()
{
	int	satir;
	printf("floyd ucgeni satir sayisini giriniz\n");
	scanf("%d",&satir);
	floyd(satir);
}
