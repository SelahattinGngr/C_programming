#include<stdio.h>
#include<stdlib.h>

int	ucgen_c(int satir);
int	ucgen_plus(int satir);

int	main()
{
	int	satir;
	printf("satir sayisini giriniz\n");
	scanf("%d",&satir);
	ucgen_c(satir);
	ucgen_plus(satir);
}
