#include<stdio.h>
#include<stdlib.h>

void	sirasil(int sayi,int dizi[]);

int	main()
{
	int	sayi,sil;
	printf("Kac adet sayi uretilecek\n");
	scanf("%d",&sayi);
	int	dizi[sayi];
	srand(time(0));
	printf("dizi elemanlari\n");
	
	for(int	i=0;i<sayi;i++)
	{
		dizi[i]=rand()%100;
		printf("%d\n",dizi[i]);
	}
	sirasil(sayi,dizi);
}
