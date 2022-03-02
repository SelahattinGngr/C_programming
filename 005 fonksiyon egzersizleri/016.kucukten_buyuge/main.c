#include<stdio.h>
#include<stdlib.h>

void sirala(int a[],int adet);

int	main()
{
	int	sayi;
	printf("kac adet sayi uretilecek\n");
	scanf("%d",&sayi);
	int	dizi[sayi];
	sirala(dizi,sayi);
}
