#include<stdio.h>
#include<stdlib.h>

int	enbuyuk(int dizi[],int a);
int	enkucuk(int dizi[],int a);

int	main()
{
	int	a,b;
	printf("kaç adet sayi uretilecek\n");
	scanf("%d",&a);
	int	dizi[a];
	srand(time(0));// rastgele sayi olusturmak icin kullanilir
	printf("dizi elemanlari\n");
	for(int i=0;i<a;i++)
	{
		dizi[i]=rand()%100;
		printf("%d\n",dizi[i]);
	}
	printf("\nen buyuk = %d",enbuyuk(dizi,a));
	printf("\nen kucuk = %d",enkucuk(dizi,a));
}
