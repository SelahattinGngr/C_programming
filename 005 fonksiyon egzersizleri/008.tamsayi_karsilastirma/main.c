#include<stdio.h>
#include<stdlib.h>

int	tamsayi(int a,int b);

int	main()
{
	int	sayi1,sayi2,buyuk;
	printf("lutfen 2 tamsayi girin\n");
	scanf("%d%d",&sayi1,&sayi2);
	buyuk=tamsayi(sayi1,sayi2);
	
	if(buyuk==sayi1)
	{
		printf("%d buyuktur %d sayisindan",sayi1,sayi2);
	}
	else if(buyuk==0)
	{
		printf("%d ile %d esittir",sayi1,sayi1);
	}
	else
	{
		printf("%d buyuktur %d sayisindan",sayi2,sayi1);
	}
}
