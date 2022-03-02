#include<stdio.h>
#include<stdlib.h>

void	ekleme(int sayi,int dizi[]);

int	main()
{
	int	sayi,i=0;
	printf("kac adet sayi uretilecek\n");
	scanf("%d",&sayi);
	int	dizi[sayi];
	printf("uretilen sayilar\n");
	srand(time(0));
	while(i<sayi)
	{
		dizi[i]=rand()%100;
		printf("%d= %d\n",i,dizi[i]);
		i++;
	}
	ekleme(sayi,dizi);
}
