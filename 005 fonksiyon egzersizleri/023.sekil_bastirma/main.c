#include<stdio.h>
#include<stdlib.h>

void	sekilciz(int kenar,char karakter);

int	main()
{
	int	kenar;
	char	karakter;
	printf("basilacak karakteri girin\n");
	scanf("%c",&karakter);
	printf("Kenar sayisi\n");
	scanf("%d",&kenar);
	printf("\n\n");
	sekilciz(kenar,karakter);

	return 0;
}
