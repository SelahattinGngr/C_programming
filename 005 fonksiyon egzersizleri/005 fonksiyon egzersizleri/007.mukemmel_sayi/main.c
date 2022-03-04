#include<stdio.h>
#include<stdlib.h>

int	mukemmel(int	n);

int	main()
{
	int	sayi;
	int	sonuc;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&sayi);
	sonuc=mukemmel(sayi);
	
	if(sonuc==1)
	{
		printf("%d mukemmel sayidir",sayi);
	}
	else
	{
		printf("%d mukemmel sayi deglidir",sayi);
	}
}
